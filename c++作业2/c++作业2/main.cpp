//1
//�������
//#include <iostream>
//using namespace std;
//inline void func(int &a, int &b)
//{
//	int tmp;
//	tmp = a;
//	a = b;
//	b = tmp;
//}
//int main()
//{
//	int a = 6;
//	int b = 7;
//	printf("%d %d\n", a, b);
//	func(a, b);
//	printf("%d %d", a, b);
//	system("pause");
//	return 0;
//}
//�����
//#include <iostream>
//using namespace std;
//#define SWAP(a,b) a+=b;b=a-b;a=a-b
//int main()
//{
//	int a = 6;
//	int b = 7;
//	printf("%d %d\n", a, b);
//	SWAP(a, b);
//	printf("%d %d\n", a, b);
//	system("pause");
//	return 0;
//}
//#include <iostream>
//using namespace std;
//bool strtoi(const char *src, int &res)
//{
//	if (src == NULL)
//	{
//		return false;
//	}
//	while (*src <= ' ')
//	{
//		src++;
//	}
//	int flag = 1;
//	if (*src == '-')
//	{
//		flag = -1;
//		src++;
//	}
//	if (*src > '9' || *src < '0')
//	{
//		return false;
//	}
//	int sum = 0,tmp;
//	int i;
//	for (i = 0; src[i] <= '9' && src[i] >= '0'; i++)
//	{
//		tmp = src[i] - '0';
//		sum = sum * 10 + tmp;
//	}
//	res = sum * flag;
//	return true;
//
//}
//
//
//
//
//��һ������ͨ��ָ�����ư�λ����ֱ�Ӹ���ԭ����
//void sysReverse(int &num, int hex)//��һ��������Ҫ�ı�����֣��ڶ��������ǽ�������
//{
//	int i;
//	int tmp, sum = 0;
//	for (i = num; i; i /= hex) //��λ����
//	{
//		tmp = i % hex;
//		sum = sum * hex + tmp;
//	}
//	num = sum;
//}
//int main()
//{
//	int res;
//	int num = 1723;
//	sysReverse(num, 10);
//	cout << num << endl;
//	if (strtoi("-127", res))
//	{
//		cout << res <<endl;
//	}
//	else
//	{
//		cout << "fail\n" << endl;
//	}
//	system("pause");
//	return 0;
//}
//	


//void TestFor()
//{
//	int array[] = { 1, 2, 3, 4, 5 };
//	for (auto& e : array) //�������� ����ȥ�ı�������ߵ�ֵ
//		e *= 2;
//	for (auto e : array)//������� �����������ԭ�е�ֵ
//		cout << e << " ";
//	return 0;
//}