//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//
//using namespace std;
//
//// 自定义一个数据类型
//class Person {
//public:
//	string	m_Name;
//	int m_Age;
//
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//};
//
//int main()
//{
//	Person p1("Tom", 15);
//	Person p2("Jack", 17);
//	Person p3("Mark", 18);
//	Person p4("Jame", 16);
//	Person p5("XiaoMing", 26);
//	// 容器存放对象
//	vector<Person> vec;
//	// 向容器中插入数据
//	vec.push_back(p1);
//	vec.push_back(p2);
//	vec.push_back(p3);
//	vec.push_back(p4);
//	vec.push_back(p5);
//
//	// 遍历容器中数据
//	for (vector<Person>::iterator it = vec.begin(); it != vec.end(); it++)
//	{
//		// it 实际是元素数据类型的指针
//		cout << "Name:" << it->m_Name << ", Age:" << it->m_Age << endl;
//	}
//	cout << "-------------------------" << endl;
//	for_each(vec.begin(), vec.end(), [](Person p) {
//		cout << "Name:" << p.m_Name << ", Age:" << p.m_Age << endl;
//	});
//	cout << "##################################" << endl;
//	// 容器存放指针
//	vector<Person *> vec1;
//	vec1.push_back(&p1);
//	vec1.push_back(&p2);
//	vec1.push_back(&p3);
//	vec1.push_back(&p4);
//	vec1.push_back(&p5);
//	for (vector<Person *>::iterator it = vec1.begin(); it != vec1.end(); it++)
//	{
//		Person * per = *it;
//		cout << "Name:" << per->m_Name << ", Age:" << per->m_Age << endl;
//	}
//	cout << "-------------------------" << endl;
//	for_each(vec1.begin(), vec1.end(), [](Person * p) {
//		cout << "Name:" << p->m_Name << ", Age:" << p->m_Age << endl;
//	});
//	cout << "##################################" << endl;
//	system("pause");
//	return 0;
//}