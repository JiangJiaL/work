#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//计算器
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

//		printf("请输入你要进行的操作 :");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个操作数\n");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			printf("请输入两个操作数\n");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("请输入两个操作数\n");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("请输入两个操作数\n");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("%d\n", ret);
//			break;
//		default:
//			printf("请输入正确数字\n");
//
//		}
//
//	} while (input);
//
//	system("pause");
//	return 0;
//}
//转移表
int main()
{
	int input;
	int x = 0;
	int y = 0;
	int ret = 0;
	int(*fun[5])(int, int) = { 0, Add, Sub, Mul, Div };
	
	do{
		menu();
		printf("请输入要进行的操作：");
		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			printf("请输入两个操作数\n");
			scanf("%d %d", &x, &y);
			ret = fun[input](x, y);
			printf("%d\n", ret);
		}

	} while (input);
	system("pause");
	return 0;
}