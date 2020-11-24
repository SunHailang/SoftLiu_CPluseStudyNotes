#include<iostream>
using namespace std;

#include "Cat.h"
#include "Dog.h"

void DoSpeak(Animal& animal)
{
	animal.Speak();
}

//int main()
//{
//	Animal* cat = new Cat("Tom");
//	cat->Speak();
//	delete cat;
//
//	Dog dog = Dog("Jack");	
//	DoSpeak(dog);
//
//
//
//	system("pause");
//	return 0;
//}