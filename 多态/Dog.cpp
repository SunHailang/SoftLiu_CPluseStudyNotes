#include "Dog.h"

Dog::Dog(string _name) : Animal::Animal(_name)
{
	cout << "Dog Dog()" << endl;
}

void Dog::Speak()
{
	cout << *this->m_Name << " Dog Speak." << endl;
}

Dog::~Dog()
{
	if (this->m_Name!=NULL)
	{
		cout << "Dog ~Dog()" << endl;
		delete this->m_Name;
		this->m_Name = NULL;
	}
}