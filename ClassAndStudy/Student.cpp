#include "Student.h"


void Student::SetName(string _name)
{
	this->Name = _name;
}

void Student::SetPassword(int _password)
{
	this->m_passworld = _password;
}

void Student::ShowStudent()
{
	cout << "Name: " << this->Name << "  ID: " << this->ID << endl;
}

Student& Student::GetStudent()
{
	return *this;
}