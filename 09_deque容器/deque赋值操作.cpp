//#include <iostream>
//#include <deque>
//
//using namespace std;
//// reque 赋值操作
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
//	for (int i = 0; i < 10; i++)
//	{
//		deq.push_back(i);
//	}
//	printDeque(deq);
//
//	deque<int> deq1 = deq;
//	printDeque(deq1);
//
//	deque<int> deq2;
//	deq2.assign(deq.begin(), deq.end());
//	printDeque(deq2);
//
//	deque<int> deq3;
//	deq3.assign(10, 5);
//	printDeque(deq3);
//
//	system("pause");
//	return 0;
//}