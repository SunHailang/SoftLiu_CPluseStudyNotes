#pragma once

#include<ostream>
#include<cmath>

using namespace std;

class Vector3
{
	// 全局函数 做友元
	friend ostream & operator<<(ostream & cout, Vector3 & ve3);

public:
	Vector3();
	Vector3(float x);
	Vector3(float x, float y);
	Vector3(float x, float y, float z);
	~Vector3();
	// 加号运算符重载
	Vector3& operator+(Vector3 & v3);
	Vector3& operator-(Vector3 & v3);

	float Dot(Vector3 & v3);
	Vector3& Cross(Vector3 & v3);

	Vector3& ModLength();

	// << 左移运算符重载  只能用全局函数实现
	// void operator<<();

private:
	float m_x;
	float m_y;
	float m_z;

};

ostream & operator<<(ostream & cout, Vector3 & ve3);

