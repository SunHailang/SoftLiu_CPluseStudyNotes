#include<iostream>
#include<string>
using namespace std;

// 类模板与继承
template<class T>
class Base
{
	T m_t;
};

//class Son :public Base// 错误必须要知道父类中 T 的类型才能继承给子类
class Son1 :public Base<int>
{

};

// 子类也变成一个类模板
template<class T1, class T2>
class Son2 :public Base<T2>
{
public:
	Son2()
	{
		cout << "T1 Type:" << typeid(T1).name() << endl;
		cout << "T2 Type:" << typeid(T2).name() << endl;
	}

	T1 obj;
};

int main()
{
	Son1 s1; // 此时 Base的 T 只能是 int 类型

	Son2<int, char> s2; // 此时 Base 的 T 是 char 类型


	system("pause");
	return 0;
}