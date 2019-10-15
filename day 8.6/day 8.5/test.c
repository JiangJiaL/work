#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//void Bubble(int arr[], int n)
//{
//	int i, j, tmp = 0;
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				tmp = arr[j];
//
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//
//			}
//		}
//	}
//}

//int main()
//{
//	int arr[] = { 6, 3, 5, 8, 2, 9, 1, 0 };
//	int n = sizeof (arr) / sizeof(arr[0]);
//	Bubble(arr,n);
//	/*int  i;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d", arr[i]);
//	}*/
//	int k , i;
//	scanf("%d", &k);
//	for (i = 0; i <k; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	system("pause");
//	return 0;
//}
//char *arr()
//{
//	char buffer[6] = { 0 };
//	char *s = "Hello world!";
//	for (int i = 0; i < sizeof(buffer)-1; i++)
//	{
//		buffer[i] = *(s + i);
//	}
//	return buffer;
//}
//int main()
//{
//	printf("%s\n", arr());
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	printf("%d, %d\n", sizeof (i++), i);
//	system("pause");
//	return 0;
//}
#include <string.h>
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = (char)(-1 - i);
//	}
//	printf("%d\n", strlen(a));
//
//	system("pause");
//	return 0;
//}

int fun(char *s)
{
	char *p = s;
	while (*p != '\0')
	{
		p++;
	}
	return (p - s);
}
int  main()
{
	printf("%d\n", fun("goodbye!"));
	system("pause");
	return 0;
}