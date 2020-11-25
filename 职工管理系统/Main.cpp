#include "Options.h"
#include "EmployeeManager.h"
#include<stdio.h>

#ifdef _WIN32
#include <Windows.h>
#endif

int main()
{
//#ifdef _WIN32
//	//http://m.blog.csdn.net/article/details?id=52789570
//	//控制台显示乱码纠正
//	// system("chcp 65001"); //设置字符集（使用SetConsoleCP(65001)设置无效，原因未知）
//	SetConsoleOutputCP(936);
//	CONSOLE_FONT_INFOEX info = { 0 }; // 以下设置字体来支持中文显示。
//	info.cbSize = sizeof(info);
//	info.dwFontSize.Y = 16; // leave X as zero
//	info.FontWeight = FW_NORMAL;
//	wcscpy_s(info.FaceName, L"Consolas");
//	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), NULL, &info);
//#endif

	EmployeeManager eManager;

	struct StaffInfo * staffHead = eManager.ReadSave();

	bool quit = false;
	while (!quit)
	{
		system("cls");
		eManager.PrintUI();
		int select = -1;
		cout << "Input Options:";
		cin >> select;
		switch (select)
		{
		case 0: // 退出
			quit = eManager.Quit();
			break;
		case 1: // 增加职工信息
			eManager.AddStaffInformation(staffHead);
			break;
		case 2: // 显示职工信息
			eManager.ShowStaffInfoMation(staffHead);
			break;
		case 3: // 按照编号排序

			break;

		case 4:// 查找职工信息

			break;
		case 5:// 修改职工信息

			break;
		case 6:// 删除离职职工
			eManager.DeleteStaffByID(staffHead);
			break;
		case 7:// 清空所有文档

			break;
		default:
			break;
		}
	}


	system("pause");
	return 0;
}


