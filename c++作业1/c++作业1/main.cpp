#include "sort.h"
void printArray(TMP *src, int n)
{
	int i ;
	for (i = 0; i < n; i++)
	{
		cout << src[i] << ' ' ;
	}
	cout << endl;
	
}
void func(TMP * src, int n ,int i=1 )
{
	switch (i)
	{
	case 1:cout << "ֱ�Ӳ��뷨"<< endl;
		InsertSort(src, 8);
		break;
	case 2:cout << "ϣ������" << endl;
		ShellSort(src, 8);
		break;
	case 3:cout << "�鲢����" << endl;
		MergeSort(src, 8);
		break;
	case 4:cout << "��������" << endl;
		QuickSort(src, 8);
		break;
	default:break;
	}
	printArray(src, 8);
}

int main()
{
	TMP str1[] = { 2, 5, 8, 3, 9, 4, 6, 1 };
	TMP str2[] = { 2.1, 9.5, 3.2, 7.4, 5.3, 8.9, 6.7, 1.8 };
	func(str1, 8);
	func(str2, 8, 2);
	system("pause");
	return 0;
}

