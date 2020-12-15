#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;
// reque 数据存取
//参数 是 const 状态 -> 迭代器 也需要是 const_iterator
void printDeque(const deque<int>& deq)
{
	for (deque<int>::const_iterator it = deq.begin(); it != deq.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

int main()
{
	deque<int> deq;
	// 尾插
	deq.push_back(10);
	// 头插
	deq.push_front(12);
	deq.push_front(15);
	deq.insert(deq.begin(), 20);
	deq.insert(deq.begin() + 2, 30);
	printDeque(deq);
	// sort 默认升序排列
	sort(deq.begin(), deq.end());
	printDeque(deq);
	// sort 传入 比较函数 ，可以自定义 排序的顺序  升序 or 降序
	sort(deq.begin(), deq.end(), [](int a, int b)->bool {
		return a > b;
	});
	printDeque(deq);

	system("pause");
	return 0;
}