#pragma once

#include<iostream>
#include<string>

#include "Build.h"

using namespace std;

class GoodGay
{
public:
	GoodGay();
	~GoodGay();
	// Visit 函数可以访问 Build的私有成员
	void Visit();

	void Visit2();

private:
	Build * m_build;

};
