
#include "contact.h"

void menu()
{
	printf("*****1.add*********2.search****\n");
	printf("*****3.del*********4.show******\n");
	printf("*****5.clear*******6.sort******\n");
	printf("*****0.exit********7.destor****\n");
}
void start()
{
	int input = 0;
	//初始化通讯录 数组 usedSize
	Contact con;
	InitContact(&con);//初始化
	do
	{
		menu();
		printf("请输入你的操作>>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			AddContact(&con);
			break;
		case 2:
			printf("%d \n", SearchContact(&con));
			break;
		case 3:
			DelContact(&con);
			break;
		case 4:
			ShowContact(&con);
			break;
		case 5:
			ClearContact(&con);
			break;
		case 6:
			SortContact(&con);
			break;
		case 7:
			DestoryContact(&con);
			break;
		 default:
			 break;
		}
	} while (input);
}

int main()
{
	start();
	system("pause");
	return 0;
}
