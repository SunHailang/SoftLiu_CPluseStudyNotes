#pragma once
#include<iostream>
#include<string>

using namespace std;

class Build
{
	// 全局函数 做 友元
	friend void goodGay(Build * _build);

	// 类 做 友元
	friend class GoodGay;

public:
	Build();
	~Build();

	string m_sittingRoom;



private:
	string m_bedRoom;

};

void goodGay(Build * _build);