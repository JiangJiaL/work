
#include "contact.h"

void LodeContact(Contact *pcon)
{
	int i = 0;
	personInfo tmp = { 0 };
	FILE *pf = fopen("Contact.bat", "r");
	//assert(pf != NULL);
	if (pf == NULL)
	{
		perror("open file for read");
		exit(EXIT_FAILURE);
	}
	while (fread(&tmp, sizeof(personInfo), 1, pf))
	{
		checkFull(pcon);
		pcon->per[i] = tmp;
		i++;
		pcon->usedSize++;
	}
	fclose(pf);
	//pf = NULL;

}

void InitContact(Contact *pcon)
{
	assert(pcon != NULL);
	pcon->capticty = DEFAULT_SIZE;
	pcon->usedSize = 0;
	pcon->per = (personInfo *)malloc(sizeof(personInfo)* pcon->capticty);
	assert(pcon->per != NULL);
	memset(pcon->per, 0, sizeof(personInfo)* pcon->capticty);

	//pcon->usedSize = 0;
	////对数组进行初始化
	//memset(pcon->per, 0, sizeof(pcon->per));
	
	LodeContact(pcon);
}
//添加一个人到通讯录

static int checkFull(Contact *pcon)
{
	if (pcon->usedSize == pcon->capticty)
	{
		personInfo *ptr = (personInfo *)realloc(
			pcon->per,pcon->capticty*sizeof(personInfo)*2);
		if (ptr != NULL)
		{
			pcon->per = ptr;
			pcon->capticty *= 2;
			printf("增容成功\n");
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;

}
void AddContact(Contact *pcon)
{
	/*if (pcon->usedSize == MAX_NUMPERSON)
	{
		printf("不好意思，通讯录已满\n");
		return;
	}*/
	int ret = checkFull(pcon);
	if (ret == 0)
	{
		printf("扩容失败\n");
		return;
	}
		
	printf("请输入姓名: ");
	scanf("%s", pcon->per[pcon->usedSize].name);
	printf("请输入性别: ");
	scanf("%s", pcon->per[pcon->usedSize].sex);
	printf("请输入年龄: ");
	scanf("%d", &pcon->per[pcon->usedSize].age);
	printf("请输入电话: ");
	scanf("%s", pcon->per[pcon->usedSize].tele);
	printf("请输入地址: ");
	scanf("%s", pcon->per[pcon->usedSize].addr);
	pcon->usedSize++;
	printf("添加成功\n");
}
int SearchContact(Contact *pcon)
{
	int i = 0;
	char name[MAX_NAME];
	if (pcon->usedSize == 0)
	{
		printf("通讯录为空\n");
		return -1;
	}
	printf("请输入姓名: ");
	scanf("%s", name);
	{
		for (i = 0; i < pcon->usedSize; i++)
		{
			if (strcmp(pcon->per[i].name, name) == 0)
			{
				return i;
			}
		}
		printf("无此人\n");
		return -1;
	}
}

void DelContact(Contact *pcon)
{
	int index = SearchContact(pcon);
	if (index == -1)
	{
		printf("无此人\n");
		return;
	}
	for (int i = index; i < pcon->usedSize - 1; i++)
	{
		pcon->per[i] = pcon->per[i + 1];
	}
	pcon->usedSize--;
	printf("删除成功\n");
}

void ShowContact(Contact *pcon)
{
	int i = 0;
	printf("%-20s %-10s %-10s %-11s %-15s\n", "姓名", "性别", "年龄", "电话", "地址");
	for (i = 0; i < pcon->usedSize; i++)
	{
		printf("%-20s %-10s %-10d %-11s %-15s\n", pcon->per[i].name,
			pcon->per[i].sex, pcon->per[i].age,
			pcon->per[i].tele, pcon->per[i].addr);
	}
}

void ClearContact(Contact *pcon)
{
	pcon->usedSize = 0;
}
void SaveContact(Contact *pcon)
{
	FILE *pf = fopen("Contact.bat", "w");
	//assert(pf != NULL);
	if (pf == NULL)
	{
		perror("open file for write");
		exit(EXIT_FAILURE);
	}
	int i;
	for (i = 0; i < pcon->usedSize; i++)
	{
		fwrite(pcon->per , sizeof(personInfo), 1, pf);
	}
	fclose(pf);
	//pf = NULL;
}

void DestoryContact(Contact *pcon)
{
	SaveContact (pcon);
	assert(pcon != NULL);
	free(pcon->per);
	pcon->per = NULL;
	pcon->capticty = 0;
	pcon->usedSize = 0;
}

void SortContact(Contact *pcon)
{
	int i, j;
	char tmp[MAX_NAME];
	for (i = 0; i < pcon->usedSize - 1; i++)
	{
		for (j = 0; j < pcon->usedSize - i - 1; j++)
		{
			if (strcmp(pcon->per[j].name, pcon->per[j + 1].name)>0)
			{
				strcpy(tmp, pcon->per[j].name);
				strcpy(pcon->per[j].name, pcon->per[j+1].name);
				strcpy(pcon->per[j+1].name,tmp);
			}
		}
	}
}
