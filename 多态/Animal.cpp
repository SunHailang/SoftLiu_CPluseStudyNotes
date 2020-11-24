#include "Animal.h"

Animal::Animal(string _name)
{
	cout << "Animal Animal()" << endl;
	m_Name = new string(_name);
}

Animal::~Animal()
{
	if (this->m_Name != NULL)
	{
		cout << "Animal ~Animal()." << endl;
		delete this->m_Name;
		this->m_Name = NULL;
	}
}