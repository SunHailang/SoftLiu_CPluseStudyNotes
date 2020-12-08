#include <iostream>

#include <string>

using namespace std;


// 提前让编译器知道Person类的存在
template<class T1, class T2> class Person;

template<class T1, class T2>
void PrintPerson(Person<T1, T2> &p)
{
	cout << typeid(T1).name() << "  " << typeid(T2).name()<< endl;
	
	cout << "Name:" << p.m_Name << ", Age:" << p.m_Age << endl;
}


template<class T1, class T2>
class Person {
	// 全局函数类外实现
	friend void PrintPerson<>(Person<T1, T2> &p);

	// 全局函数类内实现
	friend void PrintPerson2(Person<T1, T2> &p)
	{
		cout << typeid(T1).name() << "  " << typeid(T2).name() << endl;

		cout << "Name:" << p.m_Name << ", Age:" << p.m_Age << endl;
	}

public:
	Person(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

private:
	T1 m_Name;
	T2 m_Age;
};


//int main()
//{
//	Person<string, int> p1("Jack", 18);
//
//	// 全局函数类外实现
//	PrintPerson(p1);
//
//	// 全局函数类内实现
//	PrintPerson2(p1);
//
//
//	system("pause");
//	return 0;
//}