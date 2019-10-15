#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//void Palindrome(int a)
//{
//	int num;
//	num = a;
//	int c = 0;
//	while (a > 0)
//	{
//		c = c * 10 + a % 10;
//		a = a / 10;
//		
//	}
//	if (c == num)
//	{
//		printf("%d是回文数\n", num);
//	}
//	else
//	{
//		printf("%d不是回文数\n", num);
//	}
//}
//int main()
//{
//	int k;
//	scanf("%d", &k);
//	Palindrome(k);
//	system("pause");
//	return 0;
//}

//int Pow(int a, int b)
//{
//	int tmp = a;
//	int i;
//	if (b == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		for (i = 0; i < b - 1; i++)
//		{
//			a *= tmp;
//		}
//		return a;
//	}
//	
//}
//int main()
//{
//	int x, y;
//	scanf("%d%d", &x, &y);
//	printf("%d", Pow(x, y));
//	system("pause");
//	return 0;
//}

//int mypow(int x, int y){
//	if (y == 0)
//		return 1;
//	if (y == 1)
//		return x;
//	int ret = 0;
//	int tmp = mypow(x, y / 2);
//	if (y & 1 != 0)
//	{
//		ret = x*tmp*tmp;
//	}
//	else
//	{
//		ret = tmp*tmp;
//	}
//	return ret;
//}
//
//int main()
//{
//	printf("%d\n", mypow(3, 4));
//	system("pause");
//	return 0;
//}
// 
//int Ispow(int n)
//{
//	if (n < 1)
//		return 0;
//	int m = n &(n - 1);
//	return m == 0;
//	
//}
//int main()
//{
//	int n, k;
//	scanf("%d", &n);
//	if (Ispow(n))
//	{
//		printf("%d是2的k次方\n", n);
//	}
//	else
//	{
//		printf("%d不是2的k次方\n", n);
//	}
//	system("pause");
//	return 0;
//}
//#include <string.h>
//int main()
//{
//	char str[] = "They are student.";
//	char arr[] = "aeiou";
//	char *p1 = str;
//	char *p2 = arr;
//	int a[256] = { 0 };
//	int n = strlen(arr);
//	for (int i = 0; i < n; ++i)
//	{
//		a[arr[i]] = 1;
//	}
//	while (*p1)
//	{
//		if (a[*p1] == 1)
//		{
//			*p1++;
//		}
//		*p2++ = *p1++;
//	}
//	*p2 = '\0';
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}

