//#include <iostream>
//#include <deque>
//#include <algorithm>
//
//using namespace std;
//// reque 插入和删除
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
//	for (int i = 0; i < 5; i++)
//	{
//		// 尾插
//		deq.push_back(i);
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		// 头插
//		deq.push_front(5 + i);
//	}
//	printDeque(deq);
//	// 尾删
//	deq.pop_back();
//	// 头删
//	deq.pop_front();
//	printDeque(deq);
//	// insert 插入数据
//	cout << "insert Data: " << endl;
//	deque<int>::iterator itetor0 = deq.insert(deq.begin() + 1, 100);
//	for (; itetor0 != deq.end(); itetor0++)
//	{
//		cout << *itetor0 << " ";
//	}
//	cout << endl;
//	printDeque(deq);
//	deque<int>::iterator itetor1 = deq.insert(deq.begin() + 2, 2, 50);
//	for (; itetor1 != deq.end(); itetor1++)
//	{
//		cout << *itetor1 << " ";
//	}
//	cout << endl;
//	printDeque(deq);
//	deque<int> deq1;
//	deq1.push_front(10);
//	deq1.push_back(11);
//	deque<int>::iterator itetor2 = deq.insert(deq.begin(), deq1.begin(), deq1.end());
//	for (; itetor2 != deq.end(); itetor2++)
//	{
//		cout << *itetor2 << " ";
//	}
//	cout << endl;
//
//	printDeque(deq);
//
//	// 删除
//	cout << "delete Data: " << endl;
//	deque<int>::iterator itetor3 = deq.erase(deq.begin() + 1);
//	for (; itetor3 != deq.end(); itetor3++)
//	{
//		cout << *itetor3 << " ";
//	}
//	cout << endl;
//	printDeque(deq);
//	deque<int>::iterator itetor4 = deq.erase(deq.begin() + deq.size() - 2, deq.end());
//	for (; itetor4 != deq.end(); itetor4++)
//	{
//		cout << *itetor4 << " ";
//	}
//	cout << endl;
//	printDeque(deq);
//	deq.clear();
//	cout << (deq.empty() ? "true" : "false") << endl;
//
//	system("pause");
//	return 0;
//}