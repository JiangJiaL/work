//#define  _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include<cstdio>
//#include <cstring>
//using namespace std;
//struct Poker
//{
//	char type;
//	int point;
//	
//};
//enum
//{
//	SPADES,//黑桃
//	HEARTS,//红桃 
//	CLUBS,//梅花
//	DIAMONDS,//方片
//	JOKER//王
//};
//void inputpoker(Poker * pk)
//{
//	scanf("%c%d",&pk->type,&pk->point);
//	pk->type -= 'a';
//	if (pk->type == JOKER)
//	{
//		pk->point += 13;
//	}
//	//while (getchar() != '\n');
//}
//
//void outputpoker(Poker k)
//{
//	char *type[5] = { "黑桃", "红桃", "梅花", "方片", "" };
//	char *point[16] = { "", "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "大王", "小王" };
//	printf("%s%s\n", type[k.type], point[k.point]);
//
//}
//bool  compoker(Poker a, Poker b)
//{
//	return (a.point < b.point) || (a.point == b.point && a.type < b.type);
//}
//void InsertSort(Poker *src, int n, bool(*cmp)(Poker, Poker) = compoker) //直接插入 空间复杂度为 n^2.
//{
//	int i, j;
//	Poker tmp;
//	for (i = 1; i < n; i++)
//	{
//		tmp = src[i];
//		for (j = i; j>0 && cmp(tmp,src[j - 1]); j--)
//		{
//
//			src[j] = src[j - 1];
//		}
//		src[j] = tmp;
//	}
//}
//
//int main()
//{
//
//	Poker p[5];
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		inputpoker(p + i);
//	}
//	
//	for (i = 0; i < 5; i++)
//	{
//		outputpoker(p[i]);
//	}
//	system("pause");
//	return 0;
//}
//
//

