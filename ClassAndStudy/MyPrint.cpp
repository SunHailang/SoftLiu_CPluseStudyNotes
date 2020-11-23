#include "MyPrint.h"


MyPrint::MyPrint()
{
}

void MyPrint::operator()(string msg)
{
	cout << msg << endl;
}

int MyPrint::operator()(int num1, int num2)
{
	return num1 + num2;
}


MyPrint::~MyPrint()
{
}