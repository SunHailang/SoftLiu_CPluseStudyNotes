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
//	// 不建议使用这样的方式插入数据,
//	mp["1005"] = Person("Mack");
//
//	// 这样输入一个元素，如果 key 不存在 则会在 map 容器中创建，并赋值给一个默认参数
//	//cout << mp["001"].m_Name << endl;
//
//	printMap(mp);
//
//	mp.erase(mp.begin());
//	printMap(mp);
//
//	mp.erase("002");
//	printMap(mp);
//
//	mp.erase(++mp.begin(), --mp.end());
//	printMap(mp);
//
//	system("pause");
//	return 0;
//}