#include "MyInteger.h"

MyInteger::MyInteger() :m_num(0)
{

}

MyInteger::MyInteger(int num) : m_num(num)
{

}

// 前置 ++ 运算符重载， 返回的是引用
MyInteger& MyInteger::operator++()
{
	this->m_num++;
	return *this;
}

// 后置 ++ 运算符重载， 返回的是值
MyInteger MyInteger::operator++(int)
{
	MyInteger preNum = *this;
	this->m_num++;
	return preNum;
}

MyInteger::~MyInteger()
{

}

ostream & operator<<(ostream & cout, MyInteger & num)
{
	cout << num.m_num;
	return cout;
}
