#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//void change(char arr[])
//{
//	int len = strlen(arr);
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 0; i < len; i++)
//	{
//		if (arr[i] == ' ')
//			count++;
//	}
//	i = len;
//	j = 2 * count + len;
//	while (i != j)
//	{
//		if (arr[i] == ' ')
//		{
//			arr[j--] = '0';
//			arr[j--] = '2';
//			arr[j--] = '%';
//			i--;
//		}
//		else
//		{
//			arr[j--] = arr[i--];
//		}
//	}
//}
//int main()
//{
//	char arr[20] = "abc defgx yz";
//	change(arr);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int a = 5;
//	if (a = 0)
//	{
//		printf("%d", a - 10);
//
//	}
//	else
//	{
//		printf("%d", a++);
//	}
//	system("pause");
//	return 0;
//}


//int main()
//{
//	double **a[3][4];
//	printf("%d", sizeof((double )**a[3][4]));
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int x, y, z;
//	x = z = 2;
//	y = 3;
//	if (x > y)
//		z = 1;
//	else if (x == y)
//		z = 0;
//	else
//		z = -1;
//	printf("%d", z);
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//
//	char a[] = "hello\0word";
//	char b[15] = { 0 };
//	strcpy(b, a);
//	printf("%d %d", strlen(b), sizeof(a));
//	system("pause");
//	return 0;
//}
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	int i = 0;
//	if (n < 3)
//	{
//		return 1;
//	}
//	else
//	{
//		for (i = 0; i <= n - 3; i++)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//		}
//		return c;	
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d", ret);
//	system("pause");
//		return 0;
//	}
//

//int main()
//{
//	char a[20];
//	char *p1 = (char *)a;
//	char *p2 = (char * )a + 5;
//	int n = p2 - p1;
//	printf("%d", n);
//	system("pause");
//	return 0;
//
//}


//#define F(X,Y) ((X)+(Y))
//int main()
//{
//	int *px[10];
//	int a = 3, b = 4;
//	printf("%d\n", F(a++, b++));
//	system("pause");
//	return 0;
//}




//int main()
//{
//	int i = 1, sum = 0;
//	while (i < 10)
//	{
//		sum = sum + 1;
//		i++;
//	}
//	printf("i = %d,sum = %d", i, sum);
//
//	system("pause");
//	return 0;
//}
//
//
//


//int fun(int x, int y)
//{
//	static int m = 0;
//	static int i = 2;
//	i += m + 1;
//	m = i + x + y;
//	return m;
//}
//void main()
//{
//	int j = 4;
//	int m = 1;
//	int k;
//	k = fun(j, m);
//	printf("%d,", k);
//	k = fun(j, m);
//	printf("%d\n", k);
//	system("pause");
//	return;
//}
//
//enum ENUM_A
//{
//	X1,
//	Y1,
//	Z1 = 5,
//	A1,
//	B1
//};
//enum ENUM_A enumA = Y1;
//enum ENUM_A enumB = B1;
//

