#pragma once
#include<iostream>
#include<string>
using namespace std;
/*
	Animal 内部结构

	vfptr -> 虚函数(表)指针

	vftable -> 虚函数表 存放虚函数地址

*/


class Animal
{
public:
	Animal(string _name);
	// 利用虚析构可以解决父类指针释放子类对象时不干净的问题
	//virtual ~Animal();
	// 纯虚析构 需要声明也需要实现
	// 有了纯虚析构这个类也就属于抽象类
	virtual ~Animal() = 0;
	// 虚函数
	virtual void Speak() = 0;

private:
	
protected:
	string* m_Name;
};

