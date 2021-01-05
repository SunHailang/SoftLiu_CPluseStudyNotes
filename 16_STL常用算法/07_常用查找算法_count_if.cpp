//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//// 常用查找算法 count_if
//
//// 统计内置数据类型
//class Greater20 {
//public:
//	bool operator()(int value)
//	{
//		return value > 20;
//	}
//};
//void test01()
//{
//	vector<int> vec;
//	vec.push_back(25);
//	vec.push_back(20);
//	vec.push_back(10);
//	vec.push_back(40);
//	vec.push_back(15);
//	vec.push_back(30);
//
//	int num = count_if(vec.begin(), vec.end(), Greater20());
//	cout << ">20 num: " << num << endl;
//}
//
//// 统计自定义数据类型
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	string m_Name;
//	int m_Age;
//};
//class GeraterAge20
//{
//public:
//	bool operator()(const Person &p)
//	{
//		return p.m_Age > 20;
//	}
//};
//void test02()
//{
//	vector<Person> vec;
//	vec.push_back(Person("Tom", 10));
//	vec.push_back(Person("Jack", 20));
//	vec.push_back(Person("Jame", 22));
//	vec.push_back(Person("Mack", 10));
//	vec.push_back(Person("TLY", 25));
//	vec.push_back(Person("MLS", 15));
//	// 年龄>20的人的个数
//	int num = count_if(vec.begin(), vec.end(), GeraterAge20());
//	cout << "Persion age>20 num: " << num << endl;
//}
//
//int main()
//{
//	// 统计内置数据类型
//	test01();
//	// 统计自定义数据类型
//	test02();
//
//	system("pause");
//	return 0;
//}