//#include <iostream>
//#include <deque>
//#include <algorithm>
//
//using namespace std;
//// reque 数据存取
////参数 是 const 状态 -> 迭代器 也需要是 const_iterator
//void printDeque(const deque<int>& deq)
//{
//	for (deque<int>::const_iterator it = deq.begin(); it != deq.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//int main()
//{
//	deque<int> deq;
//	// 尾插
//	deq.push_back(10);
//	// 头插
//	deq.push_front(12);
//	deq.push_front(15);
//	printDeque(deq);
//
//	int data1 = deq.at(1);
//	cout << "data1= " << data1 << endl;
//	// 修改最后一个元素
//	deq.at(deq.size() - 1) = 100;
//	int data2 = deq[0];
//	cout << "data2= " << data2 << endl;
//	// 修改第一个元素
//	deq[0] = 50;
//	// 查看第一个元素
//	cout << "front1= " << deq.front() << endl;
//	// 查看最后一个元素
//	cout << "back= " << deq.back() << endl;
//	// 修改第一个元素
//	deq.front() = 51;
//	// 查看第一个元素
//	cout << "front2= " << deq.front() << endl;
//
//	system("pause");
//	return 0;
//}