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
//	cout << " lst: ";
//	printList(lst);
//
//	list<int> lst1 = lst;
//	cout << "lst1: ";
//	printList(lst1);
//
//	list<int> lst2;
//	lst2.assign(lst1.begin(), lst1.end());
//	cout << "lst2: ";
//	printList(lst2);
//
//	list<int> lst3;
//	lst3.assign(5, 50);
//	cout << "lst3: ";
//	printList(lst3);
//
//	list<int> lst4;
//	cout << "lst4: ";
//	lst4.push_back(5);
//	printList(lst4);
//
//	// 交换 list 数据
//	lst4.swap(lst3);
//	cout << "lst3: ";
//	printList(lst3);
//	cout << "lst4: ";
//	printList(lst4);
//
//	system("pause");
//	return 0;
//}