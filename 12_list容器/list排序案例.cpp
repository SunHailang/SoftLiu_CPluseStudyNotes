#include <iostream>
#include <list>
#include <string>
#include <algorithm>

using namespace std;

class Person
{
public:
	Person(string name, int age, int height)
	{
		this->m_Name = name;
		this->m_Age = age;
		this->m_Height = height;
	}

	string m_Name;
	int m_Age;
	int m_Height;
};

int main()
{
	list<Person> lst;
	lst.push_back(Person("Tom", 16, 175));
	lst.push_back(Person("Jack", 17, 170));
	lst.push_back(Person("Zhang", 17, 172));
	lst.push_back(Person("Jame", 21, 178));
	lst.push_back(Person("Mack", 12, 165));
	// 按照年龄进行升序排序， 如果年龄相同则按照身高降序排序
	lst.sort([](Person p1, Person p2)->bool {

		if (p1.m_Age == p2.m_Age)
		{
			return p1.m_Height > p2.m_Height;
		}
		else
		{
			return p1.m_Age < p2.m_Age;
		}

	});
	for_each(lst.begin(), lst.end(), [](Person p) {
		cout << "name:" << p.m_Name << ", age:" << p.m_Age << ", heigh:" << p.m_Height << endl;
	});

	system("pause");
	return 0;
}