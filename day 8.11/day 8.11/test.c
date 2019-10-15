#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
//void bubble(int arr[], int n)
//{
//	int i, j, k = 0;
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				k = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = k;
//			}
//		}
//	}
//}
//int Moremiddle(int arr[],int n)
//{
//	//bubble(arr, n);
//	int i;
//	int count = 1;
//	for (i = 0; i < n;i++ )
//	{
//		if (arr[i] == arr[i + 1])
//		{
//			count += 1;
//			if (count > n / 2)
//			{
//				return arr[i];
//			}
//			
//		}
//		
//	}
//}
//int main()
//{
//	int i;
//	int count = 1;
//	int arr[] = { 1, 3, 3, 5, 3, 9, 3, 4, 3 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//	bubble(arr, n);
//	/*for (i = 0; i < n; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//	*/
//	int ret = Moremiddle(arr, n);
//
//	//int ret = Moremiddle(arr, n);
//	printf("%d", ret);
//	system("pause");
//	return 0;
//}

char more(char *str)
{
	int arr[256];
	char *pt = str;
	if (*pt == '\0')
	{
		return '\0';
	}
	memset(arr, 0, sizeof (arr));
	while ('\0' != *pt)
	{
		arr[*pt++]++;//遍历字符串相同的自增；

	}
	return *pt;
}
//	while ('\0' != *str)
//	{
//		if (arr[*str] > 1)
//		{
//			return *str;
//		}
//		str++;
//	}
//	return '\0';
//}
int main()
{
	char *str = "bbbbbffffff";
	printf("%c\n", more(str));
	system("pause");
	return 0;
}

//void findnum(int arr[],int n,int *pnum1,int *pnum2)
//{
//	int i;
//	int sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		sum ^= arr[i];
//	}
//	int pos;
//	for (pos = 0; !(sum & 1 << pos); pos++);
//	int num1 = 0, num2 = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] & 1 << pos)
//		{
//			num1 ^= arr[i];
//		}
//		else
//		{
//			num2 ^= arr[i];
//		}
//	}
//	*pnum1 = num1;
//	*pnum2 = num2;
//
//}
//int main()
//{
//	int arr[] = { 1, 3, 5, 7, 1, 3, 5, 9 };
//	int num1, num2;
//	findnum(arr, sizeof(arr) / sizeof(arr[0]), &num1, &num2);
//	printf("%d,%d", num1, num2);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	unsigned int a = 0xFFFFFFF7;
//	unsigned char i = (unsigned char)a;
//	char *b = (char *)&a;
//	printf("%08x,%08x", i, *b);
//	system("pause");
//	return 0;
//
//}

//int main()
//{
//	int i = 4;
//	int j = i;
//	for (; j <= 2 * i; j++)
//	{
//		switch (j / i)
//		{
//		case 0:
//		case 1:
//			printf("*");
//			break;
//		case 2:
//			printf("#");
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int x = 1, y = 012;
//	printf("%d", y*x++);
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int *)(&arr + 1);
//	printf("%d,%d", *(arr + 1), *(ptr - 1));
//	system("pause");
//	return 0;
//}

//int main()
//{
//	unsigned short sht = 0;
//	sht--;
//	printf("%d", sht);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	unsigned long arr[] = { 6, 7, 8, 9, 10 };
//	unsigned long *p;
//	p = arr;
//	*(p + 2) += 2;
//	printf("%d,%d\n", *p, *(p + 2));
//	system("pause");
//	return 0;
//
//}

//int main()
//{
//	char *s = "abcde";
//	s += 2;
//	printf("%lu\n", s);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int i;
//	char a[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
//	for (i = 0; i < 10; i++)
//	{
//		a[i] = '0';
//
//	}
//	printf("%d\n", strlen(a));
//	system("pause");
//	return 0;
//}

//void foo(int b[][3])
//{
//	++b;
//	b[1][1] = 9;
//}
//void main()
//{
//	int a[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
//	foo(a);
//	printf("%d", a[2][1]);
//	system("pause");
//}
//int main()
//{
//	int i = 10;
//	long long t = sizeof(i++);
//	printf("%d", i);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	double a = (double)(10 / 4 * 4);
//	printf("%f", a);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i, x, y;
//	i = x = y = 0;
//	do{
//		++i;
//		if (i % 2)
//		x += i;
//		i++;
//		y += i++;
//	} while (i <= 7);
//	printf("%d,%d,%d", i, x, y);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int x;
//	x = 4;
//	x += x *= x + x;
//	printf("%d", x);
//	system("pause");
//	return 0;
//}
//#include <string.h>
//int main()
//{
//	char x[] = "abcd";
//	char y[] = { 'a', 'b', 'c', 'd' };
//	printf("%d,%d", strlen(x), strlen(y));
//	system("pause");
//	return 0;
//}

//int func(int a)
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
//		k = func(a++);
//	}
//	printf("%d\n", k);
//	system("pause");
//	return 0;
//}