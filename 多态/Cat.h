#pragma once
#include "Animal.h"

class Cat : public Animal
{
public:
	Cat(string _name);
	virtual ~Cat();
	// 重写 Animal 里的虚函数
	void Speak();

private:

};

