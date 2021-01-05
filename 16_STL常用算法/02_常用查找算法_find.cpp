//#include <iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
//#include <string>
//
//// 常用查找算法
//
//// 查找内置数据类型
//void test01()
//{
//	vector<int> vec;
//	for (size_t i = 0; i < 10; i++)
//	{
//		vec.push_back(i);
//	}
//	// 查找容器中 是否有 5 这个元素
//	vector<int>::iterator it = find(vec.begin(), vec.end(), 5);
//	if (it == vec.end())
//	{
//		cout << "not find 5." << endl;
//	}
//	else
//	{
//		cout << "find 5." << endl;
//	}
//}
//
//// 查找自定义数据类型
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_name = name;
//		this->m_age = age;
//	}
//	// 重载 == 操作符
//	bool operator==(const Person &p1)
//	{
//		if (this->m_name == p1.m_name && this->m_age == p1.m_age)
//		{
//			return true;
//		}
//		return false;
//	}
//
//	string m_name;
//	int m_age;
//};
//void test02()
//{
//	vector<Person> vec;
//	vec.push_back(Person("aaa", 10));
//	vec.push_back(Person("bbb", 11));
//	vec.push_back(Person("ccc", 12));
//	vec.push_back(Person("ddd", 13));
//
//	vector<Person>::iterator it = find(vec.begin(), vec.end(), Person("ccc", 12));
//	if (it == vec.end())
//	{
//		cout << "not find Persion." << endl;
//	}
//	else
//	{
//		cout << "find Persion:name:" << it->m_name << " age:" << it->m_age << endl;
//	}
//}
//
//int main()
//{
//	test01();
//	test02();
//
//	system("pause");
//	return 0;
//}