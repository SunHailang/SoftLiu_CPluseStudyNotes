#include "../HeaderFiles/Header.h"


void PrintUI()
{
	cout << "************************" << endl;
	cout << "****     1. Add     ****" << endl;
	cout << "****     2. Show    ****" << endl;
	cout << "****     3. Delete  ****" << endl;
	cout << "****     4. Find    ****" << endl;
	cout << "****     5. Modify  ****" << endl;
	cout << "****     6. Clear   ****" << endl;
	cout << "****     0. Quit    ****" << endl;
	cout << "************************" << endl;
}

bool Quit()
{
	bool result = 0;
	char quit = 'N';
	cout << "Sure or Cancel: (Y/N)";
	cin >> quit;
	if (quit == 'N' || quit == 'n')
	{
		// cancel

	}
	else if (quit == 'Y' || quit == 'y')
	{
		cout << "Welcome next time." << endl;
		result = true;
	}
	else
	{

	}
	return result;
}

bool canAdd(AddressBook * books)
{
	int size = books->peopleNum;
	int len = sizeof(books->peopleArray) / sizeof(books->peopleArray[0]);
	if (size >= len)
	{
		/*int maxLen = len * 2;
		People * p = new People[maxLen];
		books->peopleArray = p;*/
		return false;
	}
	return true;
}

void Add(AddressBook * books)
{
	string name;
	cout << "Name: ";
	cin >> name;
	int gender;
	cout << "Gender: 1: Male ; 2: Female -> : ";
	cin >> gender;
	int age;
	cout << "Age: ";
	cin >> age;
	string phoneNum;
	cout << "PhoneNum: ";
	cin >> phoneNum;
	string address;
	cout << "Address: ";
	cin >> address;
	int size = books->peopleNum;
	struct	People * people = &books->peopleArray[size];
	/*books->peopleArray[size] =
	{
		name,
		gender == 1 ? "Male" : "Female",
		age,
		phoneNum,
		address,
	};*/
	people->name = name;
	people->gender = gender == 1 ? "Male" : "Female";
	people->age = age;
	people->phoneNum = phoneNum;
	people->address = address;
	cout << "**** Add People Success. ****" << endl;
	books->peopleNum++;
}

void Show(const AddressBook * books)
{
	if (books->peopleNum <= 0)
	{
		cout << "Not People." << endl;
	}
	else
	{
		for (size_t i = 0; i < books->peopleNum; i++)
		{
			const People * people = &books->peopleArray[i];
			string name = "Name: " + people->name;
			string gender = "   Gender: " + people->gender;
			string age = "   Age: " + to_string(people->age);
			string phoneNum = "   PhoneNum: " + people->phoneNum;
			string address = "   Address: " + people->address;
			cout << name << gender << age << phoneNum << address << endl;
		}
	}
}