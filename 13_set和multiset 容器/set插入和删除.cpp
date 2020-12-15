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
//	s1.insert(12);
//	s1.insert(50);
//	s1.insert(19);
//	s1.insert(16);
//	s1.insert(17);
//	s1.insert(115);
//	s1.insert(14);
//	// set容器  所有的容器在插入的时候会自动排序
//	// set容器 不允许插入重复的数据
//	printSet(s1);
//	//删除  set 是双向迭代器， 不是随机迭代器不支持随机访问
//	s1.erase(s1.begin());
//
//	s1.erase(++(++s1.begin()), --(--s1.end()));
//
//	s1.erase(50);
//
//	printSet(s1);
//
//	s1.clear();
//	cout << "Empty: " << (s1.empty() ? "True" : "False") << endl;
//
//	system("pause");
//	return 0;
//}
