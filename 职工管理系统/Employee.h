#pragma once
#ifndef _EMPLOYEE_
#define _EMPLOYEE_

#include<string>
using namespace std;

class Employee
{
public:
	Employee(int _func, int _id, string _name);
	virtual ~Employee() = 0;

	virtual void Work() = 0;
	string GetInfo();

//protected:
	int * m_FuncID;
	int * m_ID;
	string m_Name;
};

#endif // !_EMPLOYEE_
