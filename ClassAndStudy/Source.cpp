#include<iostream>
using namespace std;

#include "Student.h"

#include "GoodGay.h"
#include "Build.h"

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

	GoodGay gay;
	gay.Visit();


	system("pause");
	return 0;
}