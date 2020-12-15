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
//	// 反转列表
//	lst.reverse();
//	printList(lst);
//	// 排序列表   默认升序
//	// 所有不支持随机访问迭代器的容器不可以用标准的算法
//	//sort(lst.begin(), lst.end(), [](int a, int b)->bool {
//	//	return a < b;
//	//});
//	lst.sort([](int a, int b)->bool {
//		return a > b;
//	});
//	printList(lst);
//
//	system("pause");
//	return 0;
//}