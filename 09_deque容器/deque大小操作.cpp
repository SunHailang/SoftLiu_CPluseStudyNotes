//#include <iostream>
//#include <deque>
//#include <algorithm>
//
//using namespace std;
//// reque 大小操作
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
//
//	bool isEmpty = deq.empty();
//	if (isEmpty)
//	{
//		cout << "deq is Empty." << endl;
//	}
//	else
//	{
//		cout << "deq is Not Empty." << endl;
//	}	
//
//	for (int i = 0; i < 10; i++)
//	{
//		deq.push_back(i);
//	}
//	printDeque(deq);
//
//	cout << "Size= " << deq.size() << endl;
//	
//	deq.resize(20, 100);
//	cout << "Size= " << deq.size() << endl;
//	printDeque(deq);
//
//	deq.resize(30);
//	cout << "Size= " << deq.size() << endl;
//	printDeque(deq);
//
//	deque<int>(deq).swap(deq);
//	
//
//	system("pause");
//	return 0;
//}