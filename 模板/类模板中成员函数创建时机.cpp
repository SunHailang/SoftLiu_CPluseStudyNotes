#include<iostream>
#include<string>
using namespace std;

class Person1
{
public:
	void showPerson1()
	{
		cout << "Show Person1" << endl;
	}
};

class Person2
{
public:
	void showPerson2()
	{
		cout << "Show Person2" << endl;
	}
};

// 类模板
template<class T>
class MyClass
{
public:
	T obj;

	void func1()
	{
		obj.showPerson1();
	}

	void func2()
	{
		obj.showPerson2();
	}
};
// 1. 类模板中的成员函数是在调用的时候才开始编译的

//int main()
//{
//	MyClass<Person1> p1;
//	p1.func1();
//
//	MyClass<Person2> p2;
//	p2.func2();
//
//	system("pause");
//	return 0;
//}
