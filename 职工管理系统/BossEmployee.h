#pragma once
#include<iostream>
#include "Employee.h"

using namespace std;

class BossEmployee : public Employee
{
public:
	BossEmployee(int _id, string _name);
	virtual ~BossEmployee();

	virtual void Work();

private:

};


