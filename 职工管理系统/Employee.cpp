#include "Employee.h"


Employee::Employee(int _func, int _id, string _name)
{
	this->m_FuncID = new int(_func);
	this->m_ID = new int(_id);
	this->m_Name = _name;
}

string Employee::GetInfo()
{
	return to_string(*this->m_FuncID) + "," + this->m_Name + "," + to_string(*this->m_ID);
}

Employee::~Employee()
{
	if (this->m_FuncID != NULL)
	{
		delete this->m_FuncID;
		this->m_FuncID = NULL;
	}
	if (this->m_ID != NULL)
	{
		delete this->m_ID;
		this->m_ID = NULL;
	}
}