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
//	for_each(lst.begin(), lst.end(), [](int value) {
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
//	lst.push_back(15);
//	// 头插
//	lst.push_front(20);
//	lst.push_front(23);
//	lst.push_front(26);
//	//cout << " lst: ";
//	printList(lst);
//	lst.pop_back();
//	printList(lst);
//	lst.pop_front();
//	printList(lst);
//	lst.insert(++lst.begin(), 30);
//	printList(lst);
//	lst.insert(lst.begin(), 3, 50);
//	printList(lst);
//	// 删除
//	lst.erase(++lst.begin());
//	printList(lst);
//	lst.push_back(23);
//	printList(lst);
//	lst.remove(23);
//	printList(lst);
//	// 清空
//	lst.clear();
//	cout << "Size: " << lst.size() << endl;
//	system("pause");
//	return 0;
//}