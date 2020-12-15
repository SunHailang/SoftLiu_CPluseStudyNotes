//#include <iostream>
//#include <string>
//#include <set>
//#include <algorithm>
//using namespace std;
//
//class myCompare {
//public:
//	// 仿函数
//	bool operator()(int a, int b)
//	{
//		return a > b;
//	}
//};
//
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	string m_Name;
//	int m_Age;
//};
//
//class PersonCompare
//{
//public:
//	bool operator()(Person p1, Person p2)
//	{
//		if (p1.m_Name == p2.m_Name)
//		{
//			return p1.m_Age < p2.m_Age;
//		}
//		else
//		{
//			return p1.m_Name > p2.m_Name;
//		}
//	}
//};
//
//int main()
//{
//	set<int> st1;
//	st1.insert(1);
//	st1.insert(10);
//	st1.insert(4);
//	st1.insert(9);
//	st1.insert(20);
//	for_each(st1.begin(), st1.end(), [](int value) {
//		cout << value << " ";
//	});
//	cout << endl;
//
//	set<int, myCompare> st2;
//	st2.insert(1);
//	st2.insert(10);
//	st2.insert(4);
//	st2.insert(9);
//	st2.insert(20);
//	for_each(st2.begin(), st2.end(), [](int value) {
//		cout << value << " ";
//	});
//	cout << endl;
//	// set 存放自定义数据类型
//	set<Person, PersonCompare> stPerson;
//	stPerson.insert(Person("Tom", 15));
//	stPerson.insert(Person("Tom", 16));
//	stPerson.insert(Person("Jack", 15));
//	stPerson.insert(Person("Make", 12));
//	stPerson.insert(Person("Mack", 12));
//	for_each(stPerson.begin(), stPerson.end(), [](Person value) {
//		cout << "name: " << value.m_Name << ", age: " << value.m_Age << endl;
//	});
//
//
//	system("pause");
//	return 0;
//}