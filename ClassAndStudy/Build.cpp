﻿#include "Build.h"

Build::Build()
{
	this->m_sittingRoom = "Sitting Room";
	this->m_bedRoom = "Bed Room";
}

Build::~Build()
{
}

void goodGay(Build * _build)
{
	cout << "look sittingroom: " << _build->m_sittingRoom << endl;
	// 将 goodGay 作为 Build 友元函数 就可以访问 Build 的私有成员了
	cout << "look bedgroom: " << _build->m_bedRoom << endl;
}