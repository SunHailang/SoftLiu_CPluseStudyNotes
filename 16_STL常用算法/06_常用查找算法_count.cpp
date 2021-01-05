//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//// 常用查找算法 count
//
//// 统计内置数据类型
//void test01()
//{
//	vector<int> vec;
//	vec.push_back(40);
//	vec.push_back(20);
//	vec.push_back(30);
//	vec.push_back(40);
//	vec.push_back(70);
//	vec.push_back(40);
//
//	int num = count(vec.begin(), vec.end(), 40);
//	cout << "40 num: " << num << endl;
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
//	bool operator==(const Person &p)
//	{
//		if (this->m_Age == p.m_Age)
//		{
//			return true;
//		}
//		return false;
//	}
//
//	string m_Name;
//	int m_Age;
//};
//void test02()
//{
//	vector<Person> vec;
//	vec.push_back(Person("Tom", 10));
//	vec.push_back(Person("Jack", 10));
//	vec.push_back(Person("Jame", 15));
//	vec.push_back(Person("Mack", 10));
//	vec.push_back(Person("TLY", 15));
//
//	Person p = Person("MLS", 15);
//	// 和 p 同年龄的人
//
//	int num = count(vec.begin(), vec.end(), p);
//	cout << "same p age num: " << num << endl;
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