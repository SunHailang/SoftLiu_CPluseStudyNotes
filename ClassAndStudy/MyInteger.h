#pragma once
#include<ostream>
using namespace std;

class MyInteger
{
	// 全局函数做友元
	friend ostream & operator<<(ostream & cout, MyInteger & num);

public:
	MyInteger();
	MyInteger(int num);

	// 前置 ++ 运算符重载
	MyInteger& operator++();

	// 后置 ++ 运算符重载
	// int 代表占位参数，可以用于区分前置和后置递增
	MyInteger operator++(int);

	~MyInteger();

private:
	int m_num;
};




ostream & operator<<(ostream & cout, MyInteger & num);