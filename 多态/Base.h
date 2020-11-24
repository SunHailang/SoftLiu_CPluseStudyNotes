#pragma once
#include<iostream>
using namespace std;

class Base
{
public:
	Base();
	~Base();
	// 纯虚函数 -> 只要有一个纯虚函数这个类称为抽象类
	// 抽象类特点：
	// 1. 无法实例化对象
	// 2. 抽象类的子类必须要重写纯虚函数，否则子类也属于抽象类，也无法实例化对象
	virtual void Func() = 0;

private:

};

