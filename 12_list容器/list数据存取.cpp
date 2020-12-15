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
//
//	// lst[0] 和 lst.at(0) 都不可以用 [] 访问 list 容器元素
//	// 原因是list本质是链表，不是用连续线性空间存储数据，迭代器也是不支持随机访问的
//	cout << "front: " << lst.front() << endl;
//	cout << "back: " << lst.back() << endl;
//
//	list<int>::iterator it = lst.begin();
//	// 支持双向
//	it++;
//	it--;
//	//it + 3; 不支持随机访问
//
//	system("pause");
//	return 0;
//}