//#include <iostream>
//#include <list>
//#include <string>
//
//using namespace std;
//
//void printList(const list<int> &lst)
//{
//	for (list<int>::const_iterator it = lst.begin(); it != lst.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//int main()
//{
//	list<int> lst;
//	// 尾插
//	lst.push_back(10);
//	// 头插
//	lst.push_front(20);
//	printList(lst);
//
//	list<int> lst1(lst.begin(), lst.end());
//	printList(lst1);
//
//	list<int> lst2(lst1);
//	printList(lst2);
//
//	list<int> lst3(5, 1000);
//	printList(lst3);
//
//	system("pause");
//	return 0;
//}