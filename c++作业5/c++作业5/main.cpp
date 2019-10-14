#include <iostream>
#include <cstdio>
using namespace std;
//某老板想要一个能快速计算订单价格的程序，请你帮他设计一个类： 
//1、这个类里需要原价和数量，原价从一个数组中读出即可（自行定义数组），数量需要初始化。
//2、老板会不定期调整价格，调整的方式是通过调整一个价格系数，这个系数乘以原价即为最终价格，这个折扣会影响到所有产品。
//请你设计出一个类能让老板轻松搞定这一切。

class QuickCalculation
{
	int m_primer;
	int m_count;
public:
	void Price()
	{
		int primer[8] = { 14, 25, 34, 57, 63, 25, 98, 36 };
		int count[8] = { 5, 8, 3, 6, 9, 4, 7, 6 };
		int num[8] = { 0, 1, 2, 3, 4, 5, 6, 7 }; //货物的编码
		int i;
		for (i = 0; i < 8; i++)
		{
			printf("%d货物的原价是%d,数量是%d,总价格是%d \n", num[i], primer[i], count[i], primer[i] * count[i]);
		}
		int s, r; // s代表要买的货号，r代表要买的数量。
		while (1)
		{
			cout << "请输入要买的货号以及要买的数量" << endl;
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
						cout << "数量不够" << endl;
						break;
					}
				}
			}
			if (i == 8)
			{
				cout << "您要的货号不存在" << endl;
			}
			int input;
			cout << "请选择接下来的操作:\n 1、继续选择货号\n 0、退出\n";
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
		cout << "请输入调整的价格系数" << endl;
		cin >> k;
		for (int i = 0; i < 8; i++)
		{
			primer[i] = primer[i] * k;
			printf("%d货物的现价是%d,数量是%d,总价格是%d \n", i, primer[i], count[i], primer[i] * count[i]);
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







