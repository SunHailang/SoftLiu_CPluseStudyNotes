#pragma once
#include<iostream>
#include<string>
using namespace std;

// 函数调用运算符重载
class MyPrint
{
public:
	MyPrint();
	~MyPrint();

	void operator()(string msg);
	int operator()(int num1, int num2);

private:

};

