#include<iostream>
#include<string>
using namespace std;


// 类模板
template<class T1, class T2>
class Person
{
public:
	Person(T1 _name, T2 _age)
	{
		this->m_Name = _name;
		this->m_Age = _age;
	}

	void ShowPerson()
	{
		cout << "Name: " << this->m_Name << " , Age: " << this->m_Age << endl;
	}

public:
	T1 m_Name;
	T2 m_Age;
};


void printPerson01(Person<string, int> &p)
{
	p.ShowPerson();
}
// 参数模板化
template<class T1, class T2>
void printPerson02(Person<T1, T2> &p)
{
	p.ShowPerson();
	cout << "T1:" << typeid(T1).name() << endl;
	cout << "T2:" << typeid(T2).name() << endl;
}

int main()
{
	Person<string, int> p1("Tom", 18);
	//printPerson01(p1);
	printPerson02(p1);

	system("pause");
	return 0;
}