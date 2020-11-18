#pragma once


#include<iostream>
#include<string>

using namespace std;


struct People
{
	string name;
	string gender;
	int age;
	string phoneNum;
	string address;
};

struct AddressBook
{
	int peopleNum;
	struct People peopleArray[100];
};


void PrintUI();
bool Quit();
bool canAdd(AddressBook * books);
void Add(AddressBook * books);
void Show(const AddressBook * books);