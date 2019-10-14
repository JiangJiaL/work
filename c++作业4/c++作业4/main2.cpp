//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <ctime>
//#include <cstdlib>
//
//enum{
//	SPADES,//黑桃
//	HEARTS,//红桃 
//	CLUBS,//梅花
//	DIAMONDS,//方片
//	JOKER//王
//};
//
//class Poker
//{
//	char m_type;
//	int m_point;
//public:
//	Poker() : m_type(0),
//		m_point(0)
//	{
//
//	}
//	Poker(char type, int point) :
//		m_type(type),
//		m_point(point)
//	{
//
//	}
//	void makePoker(char type, int point)
//	{
//		m_type = type;
//		m_point = point;
//		if (m_type == JOKER)
//		{
//			m_type += 13;
//		}
//	}
//	
//	void outputPoker()
//	{
//		char *type[5] = { "黑桃", "红桃", "梅花", "方片", "" };
//		char *point[16] = { "", "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "大王", "小王" };
//		printf("%s%s ", type[m_type], point[m_point]);
//	}
//	bool cmppoker(Poker tmp)
//	{
//		return (m_point < tmp.m_point) ||
//			(m_point == tmp.m_point && m_type > tmp.m_type);
//	}
//	bool isEff() // 有效牌的判断 是否有重复
//	{
//		if (m_type == JOKER && (m_point == 14 || m_point == 15))
//		{
//			return true;
//		}
//		if ((unsigned char)m_type > 3 || (unsigned int)m_point - 1 > 13)
//		{
//			return false;
//		}
//		return true;
//	}
//};
//class Player
//{
//	Poker m_HandCard[18];
//	int m_size;
//public:
//	Player() :m_size(0) {}
//	void getCard(Poker newCard)
//	{
//		int i;
//		for (i = m_size; i > 0 && m_HandCard[i - 1].cmppoker(newCard); i--)
//		{
//			m_HandCard[i] = m_HandCard[i - 1];
//		}
//		m_HandCard[i] = newCard;
//		m_size++;
//	}
//	void showCard()
//	{
//		for (auto &i : m_HandCard)
//		{
//			i.outputPoker();
//			putchar(' ');
//		}
//		putchar('\n');
//	}
//};
//int randnum(Poker * cardheap)
//{
//	int tmp = rand() % 54;
//	while (1)
//	{
//		if (cardheap[tmp].isEff())
//		{
//
//			return tmp;
//		}
//		else
//		{
//			tmp++;
//			if (tmp == 54)
//			{
//				tmp = 0;
//			}
//		}
//	}
//}
//
//int main()
//{
//	Poker tmp[54];
//	int j = 0;
//	Player p1;
//	Player p2;
//	Player p3;
//	for (auto &i : tmp)
//	{
//		i.makePoker(j / 13, j % 13 + 1);
//		j++;
//	}
//	srand((unsigned)time(NULL));
//	int delcard;
//	int i;
//	for (i = 0; i < 18; i++)
//	{
//		delcard = randnum(tmp);
//		p1.getCard(tmp[delcard]);
//		tmp[delcard].makePoker(-1, -1);
//
//		delcard = randnum(tmp);
//		p2.getCard(tmp[delcard]);
//		tmp[delcard].makePoker(-1, -1);
//
//		delcard = randnum(tmp);
//		p3.getCard(tmp[delcard]);
//		tmp[delcard].makePoker(-1, -1);
//	}
//	p1.showCard();
//	p2.showCard();
//	p3.showCard();
//	system("pause");
//	return 0;
//};