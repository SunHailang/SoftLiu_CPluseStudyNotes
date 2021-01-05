//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <functional>
//
//using namespace std;
//
//// 常用排序算法 sort
//
//class Person {
//public:
//	Person(int age)
//	{
//		this->m_Age = age;
//	}
//	int m_Age;
//};
//
//class GreaterPerson
//{
//public:
//	bool operator()(const Person &p1, const Person &p2)
//	{
//		return p1.m_Age > p2.m_Age;
//	}
//};
//
//int main()
//{
//	vector<int> vec;
//	vec.push_back(1);
//	vec.push_back(19);
//	vec.push_back(9);
//	vec.push_back(40);
//	vec.push_back(2);
//	for_each(vec.begin(), vec.end(), [](int value) {
//		cout << value << " ";
//	});
//	cout << endl;
//
//	// 降序
//	sort(vec.begin(), vec.end(), [](int value1, int value2)->bool {
//		return value1 > value2;
//	});
//
//	for_each(vec.begin(), vec.end(), [](int value) {
//		cout << value << " ";
//	});
//	cout << endl;
//
//	cout << "---------------------" << endl;
//	vector<Person> vec2;
//	vec2.push_back(Person(1));
//	vec2.push_back(Person(5));
//	vec2.push_back(Person(3));
//	vec2.push_back(Person(7));
//	vec2.push_back(Person(2));
//
//	sort(vec2.begin(), vec2.end(), [](const Person &p1, const Person &p2)->bool {
//		return p1.m_Age < p2.m_Age;
//	});
//	for_each(vec2.begin(), vec2.end(), [](Person value) {
//		cout << value.m_Age << " ";
//	});
//	cout << endl;
//
//	system("pause");
//	return 0;
//}