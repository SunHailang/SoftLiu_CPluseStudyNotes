#include<iostream>
#include<string>
using namespace std;

// 类模板
template<class NameType, class AgeType>
class Person
{
public:
	Person(NameType _name, AgeType _age)
	{
		this->m_Name = _name;
		this->m_Age = _age;
	}

	void ShowPerson()
	{
		cout << "Name:" << this->m_Name << " , Age:" << this->m_Age << endl;
	}


public:
	NameType m_Name;
	AgeType m_Age;
};


//int main()
//{
//	Person<string, int>p1("Jack", 18);
//
//	p1.ShowPerson();
//
//	system("pause");
//	return 0;
//}