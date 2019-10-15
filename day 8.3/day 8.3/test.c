#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//#pragma pack(4)
//int main(int argc, char * argv[])
//{
//	struct tagTest1
//	{
//		short a;
//		char d;
//		long b;
//		long c;
//
//	};
//	struct tagTest2
//	{
//		long b;
//		short c;
//		char d;
//		long a;
//
//	}; struct tagTest3
//	{
//		short c;
//		long b;
//		char d;
//		long a;
//
//	};
//	struct tagTest1 stT1;
//	struct tagTest2 stT2;
//	struct tagTest3 stT3;
//	printf("%d %d %d", sizeof(stT1), sizeof (stT2), sizeof(stT3));
//	
//	system("pause");
//	return 0;
//}

//#pragma pack()

//int fun(unsigned int a)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((a >> i) & 1))
//			count++;
//	}
//	return count;
//}
//int main()
//{
//	unsigned int x;
//	scanf("%d", &x);
//	int ret = fun(x);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//
//int change(int *px)
//{
//	int y = 8;
//	y = y - *px;
//	px = &y;
//	return 0;
//}
//int main()
//{
//	int xx = 3;
//	int *py = &xx;
//	change(py);
//	printf("%d\n", *py);
//	system("pause");
//	return 0;
//
//}
//
//int main()
//{
//	char arr[2][4];
//	strcpy((char*)arr, "you");
//	strcpy(arr[1], "me");
//	arr[0][3] = '&';
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}

//int fun(int x)
//{
//	int count = 0;
//	while (x)
//	{
//		count++;
//		x = x & (x - 1);
//	}
//	return count;
//}
//int main()
//{
//	printf("fun(2017) = %d\n", fun(2019));
//	system("pause");
//	return 0;
//
//}


//#define CIR(r) r*r
//void main()
//{
//	int a = 1;
//	int b = 2;
//	int t;
//	t = CIR(a + b);
//	printf("%d\n", t);
//	system("pause");
//	return;
//}

unsigned long g_ulGlobal = 0;
void GlobalInit(unsigned long ulArg)
{
	ulArg = 0x01;
	return;
}
void main()
{
	
	GlobalInit(g_ulGlobal);
	printf("%lu", g_ulGlobal);
	system("pause");
	return;
}
//typedef struct Node{
//	int data;
//	struct LinkNode* next;
//}LinkNode;
//LinkNode* FindK1(LinkNode *head, int k)
//{
//	if (head == NULL|| k == 0)   return NULL;
//	LinkNode *p1; p1 = head;
//	LinkNode *p2; p2 = head;
//	int i = 0;
//	while (p1 != NULL)
//	{
//		if (i < k)
//		{
//			p1 = p1->next;
//			i++;
//		}
//		else
//		{
//			p1 = p1->next;
//			p2 = p2->next;
//		}
//	}
//	if (i < k)
//	{
//		return NULL;
//	}
//	return p2;
//}
//int main()
//{
//	LinkNode *head, *p1, *p2;
//	int a[6] = { 1, 2, 3, 4, 5, 6 };
//	//head = createLink(a);
//	p1 = FindK1(head, 3);
////	p2 = FindK1(head, 3);
//	printf("%d", p1->data);
//	//printf("%d", p2->data);
//	system("pause");
//	return 0;
//}
