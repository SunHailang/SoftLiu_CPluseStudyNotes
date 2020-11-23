#include "Person.h"

Person::Person(string _name, int _age)
{
	this->m_Name = _name;
	this->m_Age = new int(_age);
}

Person& Person::operator=(Person & p)
{
	// 编译器是提供浅拷贝
	//this->m_Age = p.m_Age;

	this->m_Name = p.m_Name;

	// 应该先判断是否有属性在堆区， 如果有先释放干净，然后再深拷贝
	if (this->m_Age != NULL)
	{
		delete this->m_Age;
		this->m_Age = NULL;
	}
	this->m_Age = new int(*p.m_Age);

	return *this;
}

bool Person::operator==(Person & p)
{
	if (this->m_Name == p.m_Name && *this->m_Age == *p.m_Age)
	{
		return true;
	}
	return false;
}

bool Person::operator!=(Person & p)
{
	if (this->m_Name == p.m_Name && *this->m_Age == *p.m_Age)
	{
		return false;
	}
	return true;
}


string Person::GetName()
{
	return this->m_Name;
}

int Person::GetAge()
{
	return *this->m_Age;
}


Person::~Person()
{
	if (this->m_Age != NULL)
	{
		delete this->m_Age;
		this->m_Age = NULL;
	}
}