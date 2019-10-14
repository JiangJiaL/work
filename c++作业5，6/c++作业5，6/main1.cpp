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
//		int num[COST] = { 0, 1, 2, 3, 4, 5, 6, 7 }; //货物的编码
//		for (int i = 0; i < COST; i++)
//		{
//			printf("%d货物的原价是%d,数量是%d,总价格是%d \n", num[i], primer[i], count[i], primer[i] * count[i]);
//		}
//		int s, r; // s代表要买的货号，r代表要买的数量。
//		cout << "请输入要买的货号以及要买的数量" << endl;
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
//					cout << "数量不够" << endl;
//					break;
//				}
//
//			}
//			else if (i == COST)
//			{
//				cout << "您要的货号不存在" << endl;
//				break;
//			}
//		}
//		int k;
//		cout << "请输入调整的价格系数" << endl;
//		cin >> k;
//		for (int i = 0; i < COST; i++)
//		{
//			primer[i] = primer[i] * k;
//			printf("%d货物的现价是%d,数量是%d,总价格是%d \n", i, primer[i], count[i], primer[i] * count[i]);
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
