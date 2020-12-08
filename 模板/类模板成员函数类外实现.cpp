#include<iostream>
#include<string>
using namespace std;


template<class T1, class T2>
class Person {
public:
	Person(T1 name, T2 age);
	void ShowPerson();
public:
	T1 m_Name;
	T2 m_Age;
};

template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age)
{
	this->m_Name = name;
	this->m_Age = age;
}

template<class T1, class T2>
void Person<T1, T2>::ShowPerson()
{
	cout << "Name:" < m_Name << ", Age:" << m_Age << endl;
}
