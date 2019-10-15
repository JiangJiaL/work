#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//	unsigned char a = 0xA5;
//	unsigned char b = ~a >> a + 1;
//	printf("%d\n", b);
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	const int i = 0;
//	int *j = (int *)&i;
//	*j = i;
//	printf("%d,%d", i, *j);
//	system("pause");
//	return 0;
//}

//int f(int x, int y)
//{
//	return (x&y) + ((x^y) >> 1);
//}
//int main()
//{
//	int result = f(2, 4);
//	printf("%d\n", result);
//	system("pause");
//	return 0;
//}

//void fun(int x, int y, int *c, int *d)
//{
//	*c = x + y;
//	*d = x - y;
//
//}
//int main()
//{
//	int a = 4, b = 3, c = 0, d = 0;
//	fun(a, b, &c, &d);
//	printf("%d %d", c, d);
//	system("pause");
//	return 0;
//}

//#define MA(X,Y)(X*Y)
//int main()
//{
//	int i = 5;
//	i = MA(i, i + 1) - 7;
//	printf("%d", i);
//	system("pause");
//	return 0;
//}
//#define sum(a,b,c) a+b+c
//int main()
//{
//	int i = 3;
//	int j = 2;
//	printf("%d\n", i*sum(i, (i + j), j));
//	system("pause");
//	return 0;
//}
//int f(int n)
//{
//	static int i = 1;
//	if (n >= 5)
//		return n;
//	n = n + i;
//	i++;
//	return f(n);
//}
//int main()
//{
//	printf("%d\n", f(1));
//	system("pause");
//	return 0;
//}

//int func()
//{
//	int i, j, k = 0;
//	for (i = 0, j = -1; j = 0; i++, j++)
//	{
//		k++;
//	}
//	return k;
//}
//int main()
//{
//	printf("%d\n", (func()));
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int c[] = { 1, 3, 5 };
//	int *k = c + 1;
//	printf("%d\n", *++k);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 2, *p1, **p2;
//	p2 = &p1;
//	p1 = &a;
//	a++;
//	printf("%d,%d,%d\n", a, *p1, **p2);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int k, j, s;
//	for (k = 2; k < 6; k++, k++)
//	{
//		s = 1;
//		for (j = k; j < 6; j++)
//			s += j;
//	}
//	printf("%d\n", s);
//	system("pause");
//	return 0;
//	
//}

int main()
{
	int arr[] = { 6, 7, 8, 9, 10 };
	int *ptr = arr;
	*(ptr++) += 123;
	printf("%d,%d" ,*ptr, *(++ptr));
	system("pause");
	return 0;
}