#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//������
int Add(int a, int b)
{
	return a + b;
}
int Sub(int a, int b)
{
	return a - b;
}
int Mul(int a, int b)
{
	return a * b;
}
int Div(int a, int b)
{
	return a / b;
}
void menu()
{
	printf("**************************\n");
	printf("****1.Add********2.Sub****\n");
	printf("****3.Mul********4.Div****\n");
	printf("**************************\n");
}
//int main()
//{
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//	int input;
//	do {
//		menu();

//		printf("��������Ҫ���еĲ��� :");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("����������������\n");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			printf("����������������\n");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("����������������\n");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("����������������\n");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("%d\n", ret);
//			break;
//		default:
//			printf("��������ȷ����\n");
//
//		}
//
//	} while (input);
//
//	system("pause");
//	return 0;
//}
//ת�Ʊ�
int main()
{
	int input;
	int x = 0;
	int y = 0;
	int ret = 0;
	int(*fun[5])(int, int) = { 0, Add, Sub, Mul, Div };
	
	do{
		menu();
		printf("������Ҫ���еĲ�����");
		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			printf("����������������\n");
			scanf("%d %d", &x, &y);
			ret = fun[input](x, y);
			printf("%d\n", ret);
		}

	} while (input);
	system("pause");
	return 0;
}