#include "Employee.h"


Employee::Employee(int _id, string _name)
{
	this->m_ID = new int(_id);
	this->m_Name = _name;
}

string Employee::GetInfo()
{
	return this->m_Name + "," + to_string(*this->m_ID);
}

Employee::~Employee()
{
	if (this->m_ID != NULL)
	{
		delete this->m_ID;
		this->m_ID = NULL;
	}
}