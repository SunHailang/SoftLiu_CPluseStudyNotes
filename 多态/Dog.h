#pragma once
#include "Animal.h"

class Dog : public Animal
{
public:
	Dog(string _name);
	~Dog();
	// 重写 函数返回值类型 函数名 参数列表 完全相同
	void Speak();

private:

};

