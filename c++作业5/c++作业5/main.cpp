#include <iostream>
#include <cstdio>
using namespace std;
//ĳ�ϰ���Ҫһ���ܿ��ټ��㶩���۸�ĳ�������������һ���ࣺ 
//1�����������Ҫԭ�ۺ�������ԭ�۴�һ�������ж������ɣ����ж������飩��������Ҫ��ʼ����
//2���ϰ�᲻���ڵ����۸񣬵����ķ�ʽ��ͨ������һ���۸�ϵ�������ϵ������ԭ�ۼ�Ϊ���ռ۸�����ۿۻ�Ӱ�쵽���в�Ʒ��
//������Ƴ�һ���������ϰ����ɸ㶨��һ�С�

class QuickCalculation
{
	int m_primer;
	int m_count;
public:
	void Price()
	{
		int primer[8] = { 14, 25, 34, 57, 63, 25, 98, 36 };
		int count[8] = { 5, 8, 3, 6, 9, 4, 7, 6 };
		int num[8] = { 0, 1, 2, 3, 4, 5, 6, 7 }; //����ı���
		int i;
		for (i = 0; i < 8; i++)
		{
			printf("%d�����ԭ����%d,������%d,�ܼ۸���%d \n", num[i], primer[i], count[i], primer[i] * count[i]);
		}
		int s, r; // s����Ҫ��Ļ��ţ�r����Ҫ���������
		while (1)
		{
			cout << "������Ҫ��Ļ����Լ�Ҫ�������" << endl;
			cin >> s >> r;
			for (i = 0; i < 8; i++)
			{
				if (s == num[i])
				{
					if (r <= count[s])
					{
						count[s] -= r;
						break;
					}
					else
					{
						cout << "��������" << endl;
						break;
					}
				}
			}
			if (i == 8)
			{
				cout << "��Ҫ�Ļ��Ų�����" << endl;
			}
			int input;
			cout << "��ѡ��������Ĳ���:\n 1������ѡ�����\n 0���˳�\n";
			cin >> input;
			if (input == 1)
			{
				continue;
			}
			else if (input == 0)
			{
				break;
			}
		}
		
		int k;
		cout << "����������ļ۸�ϵ��" << endl;
		cin >> k;
		for (int i = 0; i < 8; i++)
		{
			primer[i] = primer[i] * k;
			printf("%d������ּ���%d,������%d,�ܼ۸���%d \n", i, primer[i], count[i], primer[i] * count[i]);
		}
	}
};


int main()
{
	QuickCalculation tmp;
	tmp.Price();
	system("pause");
	return 0;
}







