//#include <iostream>
//#include <set>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//void printSet(const set<int> &s)
//{
//	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << (*it) << " ";
//	}
//	cout << endl;
//}
//
//int main()
//{
//	set<int> s1;
//	s1.insert(10);
//	s1.insert(11);
//	s1.insert(50);
//	s1.insert(12);
//	s1.insert(13);
//	s1.insert(14);
//	// set容器  所有的容器在插入的时候会自动排序
//	// set容器 不允许插入重复的数据
//	printSet(s1);
//
//	cout << "Size: " << s1.size() << endl;
//	cout << "Empty: " << s1.empty() << endl;
//
//	set<int> st;
//	st.insert(100);
//	// 交换 set 容器数据
//	s1.swap(st);
//	cout << "s1: ";
//	printSet(s1);
//	cout << "st: ";
//	printSet(st);
//
//	system("pause");
//	return 0;
//}
