//#include <iostream>
//#include <string>
//using namespace std;
//
//
//// 函数对象  （仿函数）
//
//class MyAdd
//{
//public:
//	int operator()(int a, int b)
//	{
//		return a + b;
//	}
//};
//
//class MyPrint
//{
//public :
//	MyPrint()
//	{
//		this->m_times = 0;
//	}
//	void operator()(string msg)
//	{
//		cout << msg << endl;
//		m_times++;
//	}
//
//
//	int m_times = 0;
//};
//
//void Print(MyPrint &mp, string msg)
//{
//	mp(msg);
//}
//
//int main()
//{
//	// 函数对象在使用的时候，可以像普通函数一样调用，可以有参数，可以有返回值
//	MyAdd myadd;
//	cout << myadd(4, 6) << endl;
//	cout << "-------------------------------------" << endl;
//	// 函数对象超出普通函数的概念，函数对象可以有自己的状态
//	MyPrint myPrint;
//	myPrint("Hello World.");
//	myPrint("Hello World.");
//	myPrint("Hello World.");
//	cout << "MyPrint Times: " << myPrint.m_times << endl;
//	cout << "-------------------------------------" << endl;
//	// 函数对象可以作为参数传递
//	MyPrint myPrint1;
//	Print(myPrint1, "Hello C++.");
//
//	system("pause");
//	return 0;
//}
//
