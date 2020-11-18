#include<iostream>

#include "HeaderFiles/Header.h"

using namespace std;


int main(int * args)
{
	//cout << "Hello World!" << endl;

	PrintUI();
	bool quit = false;

	struct AddressBook addBooks;
	addBooks.peopleNum = 0;

	while (!quit)
	{
		int cmd = 0;
		cout << "Input : ";
		cin >> cmd;

		switch (cmd)
		{
		case 0: // Quit
			quit = Quit();
			break;
		case 1: // Add
			if (canAdd(&addBooks))
			{
				Add(&addBooks);
			}
			else
			{
				cout << "Had Full, not add new people." << endl;
			}
			break;
		case 2: // Show
			Show(&addBooks);
			break;
		case 3: // Delete
			break;
		case 4: // Find
			break;
		case 5: // Modify
			break;
		case 6: // Clear
			break;
		default:
			break;
		}
		if (quit == -1)
		{
			break;
		}
	}
	system("pause");
	return 0;
}