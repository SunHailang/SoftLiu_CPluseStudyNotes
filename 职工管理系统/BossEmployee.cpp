#include "BossEmployee.h"

BossEmployee::BossEmployee(int _func, int _id, string _name) :Employee::Employee(_func, _id, _name)
{

}

void BossEmployee::Work()
{
	cout << "Func:" << *this->m_FuncID
		<< "\tName:" << this->m_Name
		<< "\tID:" << *this->m_ID << endl;
}


BossEmployee::~BossEmployee()
{

}