#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include "BossEmployee.h"
using namespace std;

#define FilePath "localSave.save"


class EmployeeManager
{
public:
	EmployeeManager();
	~EmployeeManager();
	

	void PrintUI();
	void AddStaffInformation();
	void ShowStaffInfomation();
	void SortByID();
	void ModifyStaffByID();

	void DeleteStaffByID();

	void CleanStaffFile();

	// 退出功能
	bool Quit();

	void ReadSave();
	void WriteSave(const bool append);

private:
	void AddStaffToArray(Employee * const employee);
	int IsExistStaff(const int id);

private:
	int m_EmpNum;
	Employee ** m_EmpArray;
};
