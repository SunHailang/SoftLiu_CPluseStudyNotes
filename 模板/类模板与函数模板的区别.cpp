#include<iostream>
#include<string>
using namespace std;

// 类模板
template<class NameType, class AgeType, class IDType = char>
class Person
{
public:
	Person(NameType _name, AgeType _age, IDType _id)
	{
		this->m_Name = _name;
		this->m_Age = _age;
		this->m_ID = _id;
	}

	void ShowPerson()
	{
		cout << "Name:" << this->m_Name << " , Age:" << this->m_Age << endl;
	}


public:
	NameType m_Name;
	AgeType m_Age;
	IDType m_ID;
};

// 类模板没有自动类型推导的使用方式
// 类模板在模板参数列表中可以有默认参数
//int main()
//{
//	//Person p1("Jack", 18); // 报错无法用数据类型推导
//	Person<string, int, char> p1("Jack", 18, 'a'); // 只能用显示指定类型
//	p1.ShowPerson();
//
//	Person<string, int> p2("Tom", 20, 'b');// 类模板的类型的默认参数 默认
//	p2.ShowPerson();
//
//	system("pause");
//	return 0;
//}