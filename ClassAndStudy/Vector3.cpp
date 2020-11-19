#include "Vector3.h"

Vector3::Vector3()
{
	this->m_x = 0;
	this->m_y = 0;
	this->m_z = 0;
}
Vector3::Vector3(float x)
{
	this->m_x = x;
	this->m_y = 0;
	this->m_z = 0;
}
Vector3::Vector3(float x, float y)
{
	this->m_x = x;
	this->m_y = y;
	this->m_z = 0;
}
Vector3::Vector3(float x, float y, float z)
{
	this->m_x = x;
	this->m_y = y;
	this->m_z = z;
}

Vector3& Vector3::operator+(Vector3 & v3)
{
	return Vector3(this->m_x + v3.m_x, this->m_y + v3.m_y, this->m_z + v3.m_z);
}

Vector3& Vector3::operator-(Vector3 & v3)
{
	return Vector3(this->m_x - v3.m_x, this->m_y - v3.m_y, this->m_z - v3.m_z);
}

float Vector3::Dot(Vector3 & v3)
{
	return (this->m_x * v3.m_x + this->m_x * v3.m_x + this->m_z * v3.m_z);
}

Vector3& Vector3::Cross(Vector3 & v3)
{
	return Vector3(this->m_y * v3.m_z - this->m_z * v3.m_y, this->m_z * v3.m_x - this->m_x * v3.m_z, this->m_x * v3.m_y - this->m_y * v3.m_x);
}

Vector3& Vector3::ModLength()
{
	double mod = sqrt(m_x*m_x + m_y*m_y + m_z*m_z);
	return Vector3(m_x / mod, m_y / mod, m_z / mod);
}

Vector3::~Vector3()
{

}

ostream & operator<<(ostream & cout, Vector3 & ve3)
{
	cout << "X: " << ve3.m_x << ", Y:" << ve3.m_y << ", Z:" << ve3.m_z;
	return cout;
}