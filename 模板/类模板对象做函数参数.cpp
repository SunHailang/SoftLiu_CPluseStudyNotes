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
		cout << "Name: " << this->m_Name << "\tAge: " << this->m_Age << endl;
	}

public:
	T1 m_Name;
	T2 m_Age;
};

// 指定传入类型
void printPerson01(Person<string, int> &p)
{
	p.ShowPerson();
}
// 参数模板化
template<class T1, class T2>
void printPerson02(Person<T1, T2> &p)
{
	p.ShowPerson();
	cout << "T1 Type:" << typeid(T1).name() << endl;
	cout << "T2 Type:" << typeid(T2).name() << endl;
}
// 整个类模板化
template<class T>
void printPerson03(T &p)
{
	p.ShowPerson();
	cout << "T Type:" << typeid(T).name() << endl;
}

//int main()
//{
//	Person<string, int> p1("Tom", 18);
//	//printPerson01(p1);
//	//printPerson02(p1);
//	printPerson03(p1);
//
//	system("pause");
//	return 0;
//}