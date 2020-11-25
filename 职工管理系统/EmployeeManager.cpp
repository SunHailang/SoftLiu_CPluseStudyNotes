#include "EmployeeManager.h"


EmployeeManager::EmployeeManager()
{

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

void EmployeeManager::AddStaffInformation(StaffInfo * head)
{
	int quit = 0;
	while (quit == 0)
	{
		cout << "Input ID:";
		int id = -1;
		cin >> id;
		cout << "Input Name:";
		char name[64] = { '\0' };
		cin >> name;
		while (head->next != NULL)
		{
			head = head->next;
		}
		struct StaffInfo * info = (struct StaffInfo*)malloc(sizeof(struct StaffInfo));
		info->staff = new BossEmployee(id, name);
		info->next = NULL;
		head->next = info;

		WriteSave(info, true);

		cout << "0: Keep Add." << endl;
		cout << "Any Key Quit." << endl;
		cout << "Input Options:";
		cin >> quit;
	}
}

void EmployeeManager::ShowStaffInfoMation(const StaffInfo * head)
{
	bool show = false;
	while (head->next != NULL)
	{
		head = head->next;
		head->staff->Work();
		show = true;
	}
	if (!show)
	{
		cout << "Not Any Staff." << endl;
	}
	system("pause");
}

void EmployeeManager::SortByID()
{

}



void EmployeeManager::ModifyStaffByID()
{

}

void EmployeeManager::DeleteStaffByID(StaffInfo * head)
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
			StaffInfo * header = head;
			bool deleteSuccess = false;
			while (header != NULL && header->next != NULL)
			{
				//head = head->next;
				if (*header->next->staff->m_ID == id)
				{
					StaffInfo * deleteHeader = header->next;
					header->next = header->next->next;
					delete deleteHeader;
					deleteSuccess = true;
				}
				header = header->next;
			}
			if (deleteSuccess)
			{
				WriteSave(head, false);
			}
		}
		else
		{
			quit = true;
		}
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


StaffInfo * EmployeeManager::ReadSave()
{
	struct StaffInfo * staffHead = (struct StaffInfo*)malloc(sizeof(struct StaffInfo));
	staffHead->staff = NULL;
	staffHead->next = NULL;

	struct StaffInfo * head = staffHead;

	char savePath[64] = "localSave.save";
	ifstream ifs(savePath, ios::in);
	if (!ifs.is_open())
	{
		cout << "File " << savePath << " Open Failed." << endl;
		return staffHead;
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
		string res[2] = { "0" };
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
			struct StaffInfo * staff = (struct StaffInfo*)malloc(sizeof(struct StaffInfo));
			int id = stoi(res[1].c_str());
			string name = res[0];
			Employee * employee = new BossEmployee(id, name);
			staff->staff = employee;
			staff->next = NULL;
			staffHead->next = staff;
			staffHead = staffHead->next;
		}
	}
	ifs.close();
	return head;
}

void EmployeeManager::WriteSave(const StaffInfo * head, const bool append)
{
	char savePath[64] = "localSave.save";
	ofstream ofs;
	if (append)
	{
		ofs.open(savePath, ios::out | ios::app);
	}
	else
	{
		ofs.open(savePath, ios::out);
	}
	if (!ofs.is_open())
	{
		return;
	}
	while (head != NULL)
	{
		if (head->staff != NULL)
		{
			string msg = head->staff->GetInfo();
			ofs << msg << endl;
		}
		head = head->next;
	}

	ofs.close();
}


EmployeeManager::~EmployeeManager()
{

}