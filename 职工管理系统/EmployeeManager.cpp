#include "EmployeeManager.h"


EmployeeManager::EmployeeManager()
{
	this->m_EmpNum = 0;
	this->m_EmpArray = NULL;
}
void EmployeeManager::PrintUI()
{
	cout << "**************************************" << endl;
	cout << "******  Staff Manager System    ******" << endl;
	cout << "**************************************" << endl;
	cout << "******  1: AddInformation       ******" << endl;
	cout << "******  2: ShowInformation      ******" << endl;
	cout << "******  3: SortByID             ******" << endl;
	cout << "******  4: FindByID or Name     ******" << endl;
	cout << "******  5: ModifyByID           ******" << endl;
	cout << "******  6: DeleteByID           ******" << endl;
	cout << "******  7: Clear Empty          ******" << endl;
	cout << "******  0: Quit                 ******" << endl;
	cout << "**************************************" << endl;
}

void EmployeeManager::AddStaffInformation()
{
	int quit = 0;
	while (quit == 0)
	{
		cout << "Input Func(1.Boos, 2.Manager, 3.Staff):";
		int func = -1;
		cin >> func;
		cout << "Input ID:";
		int id = -1;
		cin >> id;
		cout << "Input Name:";
		char name[64] = { '\0' };
		cin >> name;

		Employee * employee = new BossEmployee(func, id, name);
		AddStaffToArray(employee);

		WriteSave(true);

		cout << "0: Keep Add." << endl;
		cout << "Any Key Quit." << endl;
		cout << "Input Options:";
		cin >> quit;
	}
}

void EmployeeManager::AddStaffToArray(Employee * const employee)
{

	if (this->m_EmpArray == NULL || this->m_EmpNum >= sizeof(this->m_EmpArray) / sizeof(this->m_EmpArray[0]))
	{
		int len = this->m_EmpNum * 2;
		if (this->m_EmpArray == NULL)
		{
			len = 8;
		}
		Employee**work = this->m_EmpArray;
		this->m_EmpArray = new Employee *[len];
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			this->m_EmpArray[i] = work[i];
		}
	}
	this->m_EmpArray[this->m_EmpNum++] = employee;
}

int EmployeeManager::IsExistStaff(const int id)
{
	int index = -1;
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		Employee * employee = this->m_EmpArray[i];
		if (*employee->m_ID == id)
		{
			index = i;
			break;
		}
	}
	return index;
}

void EmployeeManager::ShowStaffInfomation()
{
	if (this->m_EmpNum <= 0)
	{
		cout << "Not Any Staff." << endl;
	}
	else
	{
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			this->m_EmpArray[i]->Work();
		}
	}
	system("pause");
}

void EmployeeManager::SortByID()
{
	if (this->m_EmpNum <= 0)
	{
		cout << "Not Any Employee." << endl;
		return;
	}
	cout << "Select Sort Options:" << endl;
	cout << "1. Up Sort Options" << endl;
	cout << "2. Down Sort Options" << endl;
	cout << "Input Option:";
	int option = -1;
	cin >> option;
	// 选择排序
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		int minOrMax = i;
		for (int j = i + 1; j < this->m_EmpNum; j++)
		{
			if (option == 1) // up
			{
				if (this->m_EmpArray[minOrMax]->m_ID > this->m_EmpArray[j]->m_ID)
				{
					minOrMax = j;
				}
			}
			else // down
			{
				if (this->m_EmpArray[minOrMax]->m_ID < this->m_EmpArray[j]->m_ID)
				{
					minOrMax = j;
				}
			}
		}
		if (i != minOrMax)
		{
			Employee * temp = this->m_EmpArray[i];
			this->m_EmpArray[i] = this->m_EmpArray[minOrMax];
			this->m_EmpArray[minOrMax] = temp;
		}
	}
}



void EmployeeManager::ModifyStaffByID()
{

}

void EmployeeManager::DeleteStaffByID()
{
	bool quit = false;
	bool isFirst = false;
	while (!quit)
	{
		cout << "Input Delete Staff ID ('-1' quit):";
		int id = -1;
		cin >> id;

		if (id != -1)
		{
			int index = IsExistStaff(id);
			if (index != -1)
			{
				Employee * employee = this->m_EmpArray[index];
				if (employee != NULL)
				{
					delete employee;
					employee = NULL;
				}
				this->m_EmpNum--;
				for (int i = index; i < this->m_EmpNum; i++)
				{
					this->m_EmpArray[i] = this->m_EmpArray[i + 1];
				}
				
				WriteSave(false);
			}
			else
			{
				cout << "Staff is Not Exist." << endl;
			}
		}
		else
		{
			quit = true;
		}
	}
}

void EmployeeManager::CleanStaffFile()
{
	cout << "0. Sure Clean" << endl;
	cout << "1. Cancel Clean" << endl;
	cout << "Input Options:";
	int option = -1;
	cin >> option;
	if (option == 0)
	{
		// 打开模式 ios::trunc  如果文件存在则删除并重新创建
		ofstream ofs(FilePath, ios::trunc);
		ofs.close();

		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				if (this->m_EmpArray[i] != NULL)
				{
					delete this->m_EmpArray[i];
				}
			}
			this->m_EmpNum = 0;
			delete[] this->m_EmpArray;
			this->m_EmpArray = NULL;
		}
		cout << "Clean Staff File Success." << endl;
	}
	else
	{
		cout << "Don't Clean Staff File And Back." << endl;
	}
}

bool EmployeeManager::Quit()
{
	int quit = -1;
	while (true)
	{
		cout << "0: Sure" << endl;
		cout << "1: Cancel" << endl;
		cout << "Input Options:";
		int option = -1;
		cin >> option;
		switch (option)
		{
		case 0:
			quit = 0;
			break;
		case 1:
			quit = 1;
			break;
		}
		if (quit == 0)
		{
			cout << "Welcome Use Staff Manager System." << endl;
			return true;
		}
		else if (quit == 1)
		{
			return false;
		}
		cout << "Input Error! Please Again..." << endl;
	}
}


void EmployeeManager::ReadSave()
{
	ifstream ifs;//(savePath, ios::in);
	ifs.open(FilePath, ios::in);
	if (!ifs.is_open())
	{
		cout << "File " << FilePath << " Open Failed." << endl;
		return;
	}

	while (!ifs.eof() && ifs.peek() != EOF)
	{
		char buf[1024] = { 0 };
		ifs.getline(buf, sizeof(buf));

		char *token;
		char * strc = buf;
		const char* delim = ",";
		rsize_t strmax = sizeof strc;
		char *next_token;
		token = strtok_s(strc, delim, &next_token);
		string res[3] = { "0" };
		int index = 0;
		while (token)
		{
			res[index] = string(token);
			index++;
			//cout << token << endl;
			token = strtok_s(NULL, delim, &next_token);
		}
		if (res[0] != "0")
		{
			int func = stoi(res[0].c_str());
			int id = stoi(res[2].c_str());
			string name = res[1];
			Employee * employee = new BossEmployee(func, id, name);

			AddStaffToArray(employee);
		}
	}
	ifs.close();
}

void EmployeeManager::WriteSave(const bool append)
{
	if (this->m_EmpNum <= 0)return;
	int index = 0;
	ofstream ofs;
	if (append)
	{
		ofs.open(FilePath, ios::out | ios::app);
		index = this->m_EmpNum - 1;
	}
	else
	{
		ofs.open(FilePath, ios::out);
		index = 0;
	}
	if (!ofs.is_open())
	{
		return;
	}
	for (int i = index; i < this->m_EmpNum; i++)
	{
		Employee* employee = this->m_EmpArray[i];
		string msg = employee->GetInfo();
		ofs << msg << endl;
	}
	ofs.close();
}


EmployeeManager::~EmployeeManager()
{
	if (this->m_EmpArray != NULL)
	{
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			if (this->m_EmpArray[i] != NULL)
			{
				delete this->m_EmpArray[i];
			}
		}
		this->m_EmpNum = 0;
		delete[] this->m_EmpArray;
		this->m_EmpArray = NULL;
	}
}