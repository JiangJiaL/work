#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include<cstring>
using namespace std;

struct student{
	char name[32];
	int age;
	int clas;
	bool sex;
};
int countName(student * src, int n, char * name)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (!strcmp(src[i].name,name))
		{
			count += 1;
		}
	}
	return count;
}


int countage(student * src, int n, int age)
{
	int count1 = 0;
	for (int i = 0; i < n; i++)
	{
		if (src[i].age == age)
		{
			count1 += 1;
		}
	}
	return count1;
}
int countclas(student * src, int n, int clas)
{
	int count2 = 0;
	for (int i = 0; i < n; i++)
	{
		if (src[i].clas == clas)
		{
			count2 += 1;
		}
	}
	return count2;
}
int countsex(student * src, int n, bool sex = true)
{
	int count3 = 0;
	for (int i = 0; i < n; i++)
	{
		if (src[i].sex == sex)
		{
			count3 += 1;
		}
	}
	return count3;
}
void Print(student * src, int n)
{
	cout << "����" << "\t" << "����" << "\t" << "�༶" << "\t" << "�Ա�(��0Ů1)"<< endl;
	for (int i = 0; i < n; i++)
	{
		cout << src[i].name << "\t" << src[i].age << "\t" << src[i].clas << "\t" << src[i].sex << endl;
	}
}
int main()
{
	struct student src[5] = { { "����", 12, 3, true},
	{ "����", 15, 2, true}, { "����", 18, 1, true },
	{ "С��", 15, 3, false},{ "С��", 11, 1, false } };
	Print(src, 5);
	printf("����Ϊ�����ĳ�����%d��\n", countName(src, 5, "����"));
	printf("����Ϊ18�ĳ�����%d��\n", countage(src, 5, 18));
	printf("�༶Ϊ3�ĳ�����%d��\n", countclas(src, 5, 3));
	printf("�Ա�ΪŮ�ĳ�����%d��\n", countsex(src, 5));
	system("pause");
	return 0;
}

//int main()
//{
//
//	int a;
//	double b;
//	char c;
//	cin >> a;
//	cin >> b >> c;
//	cout << a << endl;
//	cout << b << " " << c;
//	system("pause");
//	return 0;
//}