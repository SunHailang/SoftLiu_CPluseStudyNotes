#pragma once
#include <iostream>

using namespace std;


template<class T>
class MyArray
{
public:
	// 有参构造  初始数组长度
	MyArray(int capacity)
	{
		this->m_capacity = capacity;
		this->m_size = 0;
		this->m_pAddress = new T[capacity];
	}

	// 拷贝构造  防止浅拷贝的错误
	MyArray(const MyArray& arr)
	{
		this->m_capacity = arr.m_capacity;
		this->m_size = arr.m_size;
		this->m_pAddress = new T[this->m_capacity];
		for (int i = 0; i < this->m_size; i++)
		{
			this->m_pAddress[i] = arr.m_pAddress[i];
		}
	}
	// 重写 = 号运算符
	MyArray& operator=(const MyArray& arr)
	{
		// 先判断原来堆区是否有数据
		if (this->m_pAddress != NULL)
		{
			delete[] this->m_pAddress;
			this->m_pAddress = NULL;
		}
		this->m_capacity = 0;
		this->m_size = 0;
		// 进行深拷贝
		this->m_capacity = arr.m_capacity;
		this->m_size = arr.m_size;
		this->m_pAddress = new T[this->m_capacity];
		for (int i = 0; i < this->m_size; i++)
		{
			this->m_pAddress[i] = arr.m_pAddress[i];
		}

		return *this;
	}

	~MyArray()
	{
		if (this->m_pAddress!=NULL)
		{
			delete[] this->m_pAddress;
			this->m_pAddress = NULL;
		}
		this->m_capacity = 0;
		this->m_size = 0;
	}

	void Add(T data)
	{
		this->m_pAddress[this->m_size] = data;
		this->m_size++;
	}

	void Pop_Back()
	{
		if (this->size <= 0)
		{
			return;
		}
		
	}

	int GetCapacity()
	{
		return this->m_capacity;
	}

	int GetSize()
	{
		return this->m_size;
	}

	T GetArrayData(int index)
	{
		return this->m_pAddress[index];
	}

private:
	int m_capacity = 0;
	int m_size = 0;
	T * m_pAddress = NULL;

};

