#pragma once
#include<iostream>
#include<string>
using namespace std;

class Student
{
	// 默认权限是私有权限
	int m_classID;

	// 公共权限
public:
	string Name;
	int ID;

	// 保护权限
protected:
	string m_Car;

	// 私有权限
private:
	int m_passworld;

public:
	// 构造函数
	Student() { }
	// 拷贝构造
	Student(const Student &stu)
	{

	}

	// 初始化列表初始化属性
	Student(string _name, int _id) :Name(_name), ID(_id)
	{
	
	}

	// 析构函数
	~Student() { }

	void SetName(string _name);

	void SetPassword(int _password);

	void ShowStudent();

	Student& GetStudent();
};

struct MyStruct
{
	// 默认权限是公共权限
	int m_structID;
};