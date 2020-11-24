#include<iostream>
using namespace std;

class AbstractDrinking
{
protected:
	// 注水
	virtual void Boil() = 0;
	// 泡
	virtual void Brew() = 0;
	// 倒入杯中
	virtual void PourInCup() = 0;
	// 加入辅料
	virtual void PutSomething() = 0;

public:
	void MakeDrink()
	{
		Boil();
		Brew();
		PourInCup();
		PutSomething();
	}
};

class Coffee : public AbstractDrinking
{
protected:
	// 注水
	virtual void Boil()
	{
		cout << "1. Coffee Boil." << endl;
	}
	// 泡
	virtual void Brew()
	{
		cout << "2. Coffee Brew." << endl;
	}
	// 倒入杯中
	virtual void PourInCup()
	{
		cout << "3. Coffee PourInCup." << endl;
	}
	// 加入辅料
	virtual void PutSomething()
	{
		cout << "4. Coffee PutSomething." << endl;
	}
};

class Tea : public AbstractDrinking
{
protected:
	// 注水
	virtual void Boil()
	{
		cout << "1. Tea Boil." << endl;
	}
	// 泡
	virtual void Brew()
	{
		cout << "2. Tea Brew." << endl;
	}
	// 倒入杯中
	virtual void PourInCup()
	{
		cout << "3. Tea PourInCup." << endl;
	}
	// 加入辅料
	virtual void PutSomething()
	{
		cout << "4. Tea PutSomething." << endl;
	}
};

//int main()
//{
//	AbstractDrinking* coffee = new Coffee();
//	coffee->MakeDrink();
//	delete coffee;
//	cout << "------------------------------" << endl;
//	AbstractDrinking* tea = new Tea();
//	tea->MakeDrink();
//	delete tea;
//	cout << "------------------------------" << endl;
//	system("pause");
//	return 0;
//}