//#include <iostream>
//#include <cstdio>
//#define COST 8
//using namespace std;
//class QuickCalculation
//{
//
//	int m_primer;
//	int m_count;
//public:
//
//	void Price()
//	{
//		int primer[COST] = { 14, 25, 34, 57, 63, 25, 98, 36 };
//		int count[COST] = { 5, 8, 3, 6, 9, 4, 7, 6 };
//		int num[COST] = { 0, 1, 2, 3, 4, 5, 6, 7 }; //����ı���
//		for (int i = 0; i < COST; i++)
//		{
//			printf("%d�����ԭ����%d,������%d,�ܼ۸���%d \n", num[i], primer[i], count[i], primer[i] * count[i]);
//		}
//		int s, r; // s����Ҫ��Ļ��ţ�r����Ҫ���������
//		cout << "������Ҫ��Ļ����Լ�Ҫ�������" << endl;
//		cin >> s >> r;
//		for (int i = 0; i < COST; i++)
//		{
//			if (s == num[i])
//			{
//				if (r <= count[s])
//				{
//					count[s] -= r;
//					break;
//				}
//				else
//				{
//					cout << "��������" << endl;
//					break;
//				}
//
//			}
//			else if (i == COST)
//			{
//				cout << "��Ҫ�Ļ��Ų�����" << endl;
//				break;
//			}
//		}
//		int k;
//		cout << "����������ļ۸�ϵ��" << endl;
//		cin >> k;
//		for (int i = 0; i < COST; i++)
//		{
//			primer[i] = primer[i] * k;
//			printf("%d������ּ���%d,������%d,�ܼ۸���%d \n", i, primer[i], count[i], primer[i] * count[i]);
//		}
//	}
//};
//
//
//int main()
//{
//	QuickCalculation tmp;
//	tmp.Price();
//	system("pause");
//	return 0;
//}
