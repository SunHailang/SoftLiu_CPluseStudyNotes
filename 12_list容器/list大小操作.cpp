//#include <iostream>
//#include <list>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//void printList(const list<int> &lst)
//{
//	//for (list<int>::const_iterator it = lst.begin(); it != lst.end(); it++)
//	//{
//	//	cout << *it << " ";
//	//}
//	//cout << endl;
//
//	for_each(lst.begin(), lst.end(), [](int value){
//		cout << value << " ";
//	});
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
//	cout << "Size: " << lst.size() << endl;
//	cout << "Empty: " << (lst.empty() ? "true" : "false") << endl;
//	// 重新指定 list 大小
//	lst.resize(3);
//	printList(lst);
//	// 重新指定 list 大小 并用默认参数 100 填充
//	lst.resize(5, 100);
//	printList(lst);
//	lst.resize(4);
//	printList(lst);
//
//	system("pause");
//	return 0;
//}