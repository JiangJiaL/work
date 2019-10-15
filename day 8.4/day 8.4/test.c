#include <stdio.h>
#include <stdlib.h>
//int x = 3;
//void fun()
//{
//	static int x = 1;
//	x *= (x + 1);
//	printf("%d", x);
//	return;
//}
//int main()
//{
//	int i;
//	for (i = 1; i < x; i++)
//	{
//		fun();
//	}
//	system("pause");
//	return 0;
//}

//int f(int a)
//{
//	int b = 0;
//	static int c = 3;
//	a = c++,b++;
//	return (a);
//}
//int main()
//{
//	int a = 2, i, k;
//	for (i = 0; i < 2; i++)
//	{
//		k = f(a++);
//	}
//	printf("%d\n", k);
//	system("pause");
//	return 0;
//}
//int fun(int a, int b)
//{
//	if (a > b)
//	{
//		return (a + b);
//	}
//	else
//	{
//		return  (a - b);
//	}
//}
//int main()
//{
//	int x = 3, y = 8, z = 6, r;
//	r = fun(fun(x, y), 2 * z);
//	printf("%d\n", r);
//	system("pause");
//	return 0;
//}
 
//int a = 1;
//void test()
//{
//	int a = 2;
//	a += 1;
//}
//int main()
//{
//	test();
//	printf("%d\n", a);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int y, x;
//	y = 10;
//	x = y++;
//	printf("%d,%d\n", x, y);
//	system("pause");
//	return 0;
//}
//#define MOD(x,y) x%y
//int main()
//{
//	int a = 13, b = 94;
//	printf("%d\n", MOD(b, a + 4));
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int a = 5;
//	if (a = 0)
//	{
//		printf("%d", a - 10);
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
//
//	char a[] = "hello\0word";
//	char b[15] = { 0 };
//	strcpy(b, a);
//	printf("%d %d", strlen(b), sizeof(a));
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
//	char a[20];
//	char *p1 = (char *)a;
//	char *p2 = (char *)(a + 5);
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

//int fun(int x, int y)
//{
//	static int m = 0;
//	static int i = 2;
//	i += m + 1;
//	m = i + x + y;
//	return m;
//}
//
//int main()
//{
//	int j = 4;
//	int m = 1;
//	int k;
//	k = fun(j, m);
//	printf("%d ", k);
//	k = fun(j, m);
//	printf("%d", k);
//	system("pause");
//	return 0;
//}
//int f(int a)
//{
//	int b = 0; 
//	static int c = 3;
//	a = c++, b++;
//	return (a);
//}
//int main()
//{
//	int a = 2, i, k;
//	for (i = 0; i < 2; i++)
//	{
//		k = f(a++);
//	}
//	printf("%d\n", k);
//	system("pause");
//	return 0;
//}


int main()
{
	unsigned long ulA = 0x11000000;
	printf("%x\n", *(unsigned char *)&ulA);
	system("pause");
	return 0;
}