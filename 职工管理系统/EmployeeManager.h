#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include "BossEmployee.h"
#include "Options.h"
using namespace std;

#define FilePath "";


class EmployeeManager
{
public:
	EmployeeManager();
	~EmployeeManager();
	

	void PrintUI();
	void AddStaffInformation(StaffInfo * head);
	void ShowStaffInfoMation(const StaffInfo * head);
	void SortByID();
	void ModifyStaffByID();

	void DeleteStaffByID(StaffInfo * head);
	// 退出功能
	bool Quit();

	StaffInfo * ReadSave();
	void WriteSave(const StaffInfo * head, const bool append);

};
