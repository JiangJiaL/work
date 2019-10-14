#include "Date.h"
//三、设计一个日期类，包含以下功能：
//1、只能通过传入年月日初始化。
//2、可以加上一个数字n，返回一个该日期后推n天之后的日期。
//class Date
//{
//private:
//	int m_year;
//	int m_month;
//	int m_day;
//public:
//	Date(int year, int month, int day) :m_year(year),
//		                  m_month(month), m_day(day)
//	{
//	}
//	int getyear()
//	{
//		return m_year;
//	}
//	void setyear(int year)
//	{
//		if (year > 0 && year <= 2019)
//			this->m_year = year;
//		else
//			year = -1;
//	}
//	int getmonth()
//	{
//		return m_month;
//	}
//	void setmonth(int month)
//	{
//
//		if (month > 0 && month <= 12)
//			this->m_month =  month;
//		else
//			month =  -1;
//
//	}
//	int getday()
//	{
//		return m_day;
//	}
//	void setday(int day)
//	{
//		if (day > 0 && day <= 31)
//			this ->m_day =  day;
//		else
//			day = -1;
//	}
//
//	void getNDate(int n)
//	{
//		switch (getmonth())
//		{
//		case 1:
//		case 3:
//		case 5:
//		case 7:
//		case 8:
//		case 10:
//		case 12:
//			for (int i = 0; i < n;i++)
//			{
//				if (this->getday() != 31)
//				{
//					this->setday(this->getday() + 1);
//				}
//				else if (this->getmonth() == 12)
//				{
//					this->setyear(this->getyear() + 1);
//					this->setmonth(1);
//					this->setday(1);
//				}
//				else
//				{
//					this->setmonth(this->getmonth() + 1);
//					this->setday(1);
//				}
//			}
//			break;
//		case 4:
//		case 6:
//		case 9:
//		case 11:
//			for (int i = 0; i < n;i++)
//			{
//				if (this->getday() != 30)
//				{
//					this->setday(this->getday() + 1);
//				}
//				else
//				{
//					this->setmonth(this->getmonth() + 1);
//					this->setday(1);
//				}
//			}
//			break;
//		case 2:
//			for (int i = 0; i < n;i++)
//			{
//				if ((this->getyear() % 4 == 0 && this->getyear() % 100 != 0) || this->getyear() % 400 == 0)
//				{
//					if (this->getday() != 29)
//					{
//						this->setday(this->getday() + 1);
//					}
//					else
//					{
//						this->setmonth(this->getmonth() + 1);
//						this->setday(1);
//					}
//				}
//				else
//				{
//					if (this->getday() != 28)
//					{
//						this->setday(this->getday() + 1);
//					}
//					else
//					{
//						this->setmonth(this->getmonth() + 1);
//						this->setday(1);
//					}
//				}
//			}
//			break;	
//		}
//	}
//	void show()
//	{
//		cout << m_year << " " << m_month << " " << m_day << endl;
//	}
//
//};
//int main()
//{
//	Date P1 (2018,12,31);
//	P1.getNDate(100);
//	P1.show();
//	system("pause");
//	return 0;
//}

int main()
{
//	Date * pd = (Date *)malloc(sizeof(Date));
//	//只是分配空间
//	Date * pd = (Date *) operator new (sizeof (Date));
//	//分配空间，失败会调用处理方式或者抛异常。
//	Date * pd = new Date(1999, 6, 28);
//	//在operator new 的基础上调用了构造函数
//

	//char * pa = (char *)malloc(1024);
	//size_t size = 0;
	//Date * pd = new (pa + size)Date(2015, 2, 22);
	//size += sizeof(Date);
	//Date * pd2 = new (pa + size)Date(2015, 2, 22);
	//cout << (void *)pa << endl<< pd << endl << pd2;
	//Date test(2019, 9, 7);
	//Date test1(2059,8,28);
	//cout << (test + 14600) << endl;
	//cout << (test1 - 14600) << endl;


	Date d1(2000, 12, 31);
	Date d2(2012, 3, 1);

	cout << d1.operator++() << endl;
	cout << d1 << endl;
	cout << d2.operator--(0) << endl;
	cout << d2 << endl;
	system("pause");
	return 0;
}
