#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

class Person {
public:
	Person()
	{

	}
	Person(string name)
	{
		this->m_Name = name;
	}
	string m_Name;
};

class myCompare
{
public:
	// 重载 () 操作符 ， 实现仿函数功能
	bool operator()(string a, string b)
	{
		return a > b;
	}
};

int main()
{
	// 默认排序 升序,
	map<string, Person> mp;
	mp.insert(pair<string, Person>("1001", Person("Tom")));
	mp.insert(make_pair("10013", Person("Jack")));
	mp.insert(map<string, Person>::value_type("1002", Person("Jame")));
	for_each(mp.begin(), mp.end(), [](pair<string, Person> value) {
		cout << "Key: " << value.first << ", Value: " << value.second.m_Name << endl;
	});
	cout << "-------------------------------------" << endl;
	// 传入仿函数  实现降序排列
	map<string, Person, myCompare> mp1;
	mp1.insert(pair<string, Person>("1001", Person("Tom")));
	mp1.insert(make_pair("10013", Person("Jack")));
	mp1.insert(map<string, Person>::value_type("1002", Person("Jame")));
	for_each(mp1.begin(), mp1.end(), [](pair<string, Person> value) {	
		cout << "Key: " << value.first << ", Value: " << value.second.m_Name << endl;
	});

	system("pause");
	return 0;
}