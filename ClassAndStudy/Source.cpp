#include<iostream>
using namespace std;

#include "Student.h"

#include "GoodGay.h"
#include "Build.h"
#include "Vector3.h"
#include "MyInteger.h"
#include "Person.h"
#include "MyPrint.h"

#define PI 3.14


class Circle
{
	// 访问权限
public:
	// 属性
	int m_r;
	// 行为
	// 获取圆的周长
	double calculateZC()
	{
		return 2 * PI * m_r;
	}


};


int main()
{
	// 通过圆类 创建一个圆的对象
	//Circle c1;
	// 给圆对象赋值
	//c1.m_r = 2;
	//double zc = c1.calculateZC();
	//cout << "Circle ZC = " << zc << endl;

	/*Student stu1;
	stu1.Name = "ZhangSan";
	stu1.ID = 1;
	stu1.ShowStudent();*/

	//GoodGay gay;
	//gay.Visit();
	//Vector3 v1 = Vector3(1, 0, 0);	
	//Vector3 v2 = Vector3(0, 1, 1);
	//cout << v1.Dot(v2) << endl;
	//cout << v1.Cross(v2).ModLength() << endl;
	//Vector3 v3 = v1 + v2;
	//cout << v3 << endl;

	//MyInteger num = MyInteger(10);

	//cout << (++num)++ << endl;
	//cout << num << endl;

	//MyInteger num1 = num++;
	//cout << num1 << endl;
	//cout << num1 << endl;

	// 关系运算符重载  = , == , != 
	//Person p1 = Person("Tom", 18);
	//Person p2 = Person("Jack", 20);
	//Person p3 = Person("Jame", 30);
	////p2 = p1 = p3;
	//bool yes = p1 == p2;
	//cout << (yes == true ? "Yes" : "No") << endl;

	// 函数调用运算符重载
	MyPrint print;
	// 由于调用起来非常像一个函数调用， 所以被称为仿函数
	print("Hello world.");
	// 仿函数非常灵活
	cout << print(100, 100) << endl;

	// 匿名函数对象
	cout << MyPrint()(100, 100) << endl;

	system("pause");
	return 0;
}