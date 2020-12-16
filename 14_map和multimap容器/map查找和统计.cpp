//#include <iostream>
//#include <string>
//#include <map>
//
//using namespace std;
//
//class Person {
//public:
//	Person()
//	{
//
//	}
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
//	mp.insert(make_pair("10013", Person("Jack")));
//	mp.insert(map<string, Person>::value_type("1002", Person("Jame")));
//
//	map<string, Person>::iterator mpIt = mp.find("1002");
//	if (mpIt != mp.end())
//	{
//		// 存在
//		cout << "key:" << mpIt->first << ", value: " << mpIt->second.m_Name << endl;
//	}
//	else
//	{
//		// 不存在
//		cout << "key not exist" << endl;
//	}
//	// 对于 map 容器， count 返回只有 0或者1， 因为map容器不允许重复的key插入
//	// multimap 容器 可以有其他值
//	int keyCount = mp.count("1001");
//	cout << "key 1001 count: " << keyCount << endl;
//
//	system("pause");
//	return 0;
//}