#pragma once
#include<iostream>
#include<string>
using namespace std;

class Person
{
private:
	string m_Name;
	int *m_Age = NULL;

public:
	Person(string _name, int _age);
	~Person();

	Person& operator=(Person & p);
	bool operator==(Person & p);
	bool operator!=(Person & p);

	int GetAge();
	string GetName();

private:

};

