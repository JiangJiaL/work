//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <ctime>
//#define BUFSIZE 18
//using namespace std;
//class Poker
//{
//public:
//	char type;
//	int point;
//	void suijipoker(Poker *pk,Poker k)
//	{
//		char *type[5] = { "黑桃", "红桃", "梅花", "方片", "" };
//		char *point[16] = { "", "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "大王", "小王" };
//		int i = 0;
//		srand(time(NULL));
//			i = rand() % 18 + 1;
//			pk->point = i % 16;
//			pk->type = i % 5;
//			
//			/*pk->type -= 'a';
//			if (pk->type == JOKER)
//			{
//				pk->point += 13;
//			}*/
//		//while (getchar() != '\n');
//		//scanf("%c%d", &pk->type, &pk->point);
//				
//	}
//	void outputpoker(Poker k)
//	{
//		char *type[5] = { "黑桃", "红桃", "梅花", "方片", "" };
//		char *point[16] = { "", "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "大王", "小王" };
//		printf("%s%s\n", type[k.type], point[k.point]);
//	}
//
//	enum
//	{
//		SPADES,//黑桃
//		HEARTS,//红桃 
//		CLUBS,//梅花
//		DIAMONDS,//方片
//		JOKER//王
//	};
//};
//bool compoker(Poker a, Poker b)
//{
//	return (a.point < b.point) || ((a.point == b.point) && (a.type < b.type));
//}
//
//class Player{
//public:
//
//	
//	void InsertSort(Poker * src, int n, bool(*cmp)(Poker, Poker) = compoker)
//	{
//		int i, j;
//		Poker tmp;
//		for (i = 0; i < n; i++)
//		{
//			tmp = src[i];
//			for (j = i; j>0 && cmp(tmp,src[j-1]); j--)
//			{
//				src[j] = src[j - 1];
//			}
//			src[j] = tmp;
//		}
//	}
//
//};
//
//int main()
//{
//	Poker p[BUFSIZE];
//	Player A;
//    int i;
//	/*srand(time(NULL));
//
//	char pk[BUFSIZE];
//	for (i = 0; i < BUFSIZE; i++)
//	{
//		pk[i] = rand() % (BUFSIZE - i);
//	}*/
//	for (i = 0; i < BUFSIZE; i++)
//	{
//		p[i].suijipoker(p + i,p[i]); 
//		p[i].outputpoker(p[i]);
//	}
//	A.InsertSort(p, BUFSIZE, compoker);
//	/*for (i = 0; i < BUFSIZE; i++)
//	{
//		p[i].outputpoker(p[i]);
//	}*/
//	system("pause");
//	return 0;
//}
//
//
//
