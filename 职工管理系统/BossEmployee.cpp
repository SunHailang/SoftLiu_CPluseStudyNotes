#include "BossEmployee.h"

BossEmployee::BossEmployee(int _id, string _name) :Employee::Employee(_id, _name)
{

}

void BossEmployee::Work()
{
	cout << "Name:" << this->m_Name 
		<< "\tID:" << *this->m_ID << endl;
}


BossEmployee::~BossEmployee()
{

}