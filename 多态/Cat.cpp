#include "Cat.h"

Cat::Cat(string _name) : Animal::Animal(_name)
{
	cout << "Cat Cat()" << endl;
}

void Cat::Speak()
{
	cout << *this->m_Name << " Cat Speak." << endl;
}

Cat::~Cat()
{
	if (this->m_Name != NULL)
	{
		cout << "Cat ~Cat()" << endl;
		delete this->m_Name;
		this->m_Name = NULL;
	}
}