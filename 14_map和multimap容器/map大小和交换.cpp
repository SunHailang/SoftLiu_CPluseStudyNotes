//#include <iostream>
//#include <string>
//#include <map>
//
//using namespace std;
//
//class Person {
//public:
//	Person(string name)
//	{
//		this->m_Name = name;
//	}
//	string m_Name;
//};
//
//void printMap(const map<string, Person> &mp)
//{
//	for (map<string, Person>::const_iterator it = mp.begin(); it != mp.end(); it++)
//	{
//		cout << "Key: " << (*it).first << ", Value: " << (*it).second.m_Name << endl;
//	}
//	cout << "-------------------------------------" << endl;
//}
//
//int main()
//{
//	// 默认排序 升序
//	map<string, Person> mp;
//	mp.insert(pair<string, Person>("1001", Person("Tom")));
//	mp.insert(pair<string, Person>("1013", Person("Jack")));
//	mp.insert(pair<string, Person>("1002", Person("Jame")));
//	mp.insert(pair<string, Person>("1005", Person("Mack")));
//
//	cout << "Size: " << mp.size() << endl;
//	cout << "Empty: " << (mp.empty() ? "True" : "False") << endl;
//
//	printMap(mp);
//	cout << "swap befor" << endl;
//	// 交换
//	map<string, Person> mp2;
//	mp2.insert(pair<string, Person>("1020", Person("Zhang")));
//	printMap(mp2);
//	cout << "swap after" << endl;
//	mp.swap(mp2);
//	printMap(mp);
//	printMap(mp2);
//
//	system("pause");
//	return 0;
//}