//#include <iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
//#include <string>
//
//// 常用查找算法 find_if
//
//// 1. 内置数据类型
//class GreaterFive
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 5;
//	}
//};
//void test01()
//{
//	vector<int> vec;
//	for (size_t i = 0; i < 10; i++)
//	{
//		vec.push_back(i);
//	}
//
//	vector<int>::iterator it = find_if(vec.begin(), vec.end(), GreaterFive());
//	if (it == vec.end())
//	{
//		cout << "not find >5 data";
//	}
//	else
//	{
//		cout << "find >5 data:" << (*it) << endl;
//	}
//}
//
//// 2. 自定义数据类型
//class Persion
//{
//public:
//	Persion(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	string m_Name;
//	int m_Age;
//};
//
//class Greater20
//{
//public:
//	bool operator()(const Persion &p)
//	{
//		if (p.m_Age > 20)
//		{
//			return true;
//		}
//		return false;
//	}
//};
//
//void test02()
//{
//	vector<Persion> vec;
//	vec.push_back(Persion("a", 10));
//	vec.push_back(Persion("b", 25));
//	vec.push_back(Persion("c", 13));
//
//	vector<Persion>::iterator it = find_if(vec.begin(), vec.end(), Greater20());
//	if (it == vec.end())
//	{
//		cout << "not find age > 20 Persion" << endl;
//	}
//	else
//	{
//		cout << "find age > 20 Persion: name:" << it->m_Name << " age:" << it->m_Age << endl;
//	}
//
//}
//
//int main()
//{
//	// 1. 内置数据类型
//	test01();
//
//	// 2. 自定义数据类型
//	test02();
//
//	system("pause");
//	return 0;
//}