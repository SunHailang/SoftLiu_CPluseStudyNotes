#include <iostream>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

void printSet(const set<int> &s)
{
	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
	{
		cout << (*it) << " ";
	}
	cout << endl;
}

int main()
{
	set<int> s1;
	s1.insert(10);
	s1.insert(12);
	s1.insert(50);
	s1.insert(19);
	s1.insert(16);
	s1.insert(17);
	s1.insert(115);
	s1.insert(14);
	// set容器  所有的容器在插入的时候会自动排序
	// set容器 不允许插入重复的数据
	printSet(s1);
	// 查找
	set<int>::iterator it = s1.find(50);
	if (it != s1.end())
	{
		// 找到了
		cout << "find" << endl;
	}
	else
	{
		// 未找到
		cout << "not find" << endl;
	}
	// 统计
	int num = s1.count(10);
	// 对于 set 的 num 要么是 0 要么是 1
	cout << "10 count: " << num << endl;

	pair<set<int>::iterator, bool> setPair = s1.insert(60);
	if (setPair.second)
	{
		cout << "one insert success." << endl;
	}
	else
	{
		cout << "one insert failed." << endl;
	}
	pair<set<int>::iterator, bool> setPair1 = s1.insert(60);
	//setPair.first
	if (setPair1.second)
	{
		cout << "two insert success." << endl;
	}
	else
	{
		cout << "two insert failed." << endl;
	}

	multiset<int> multSet;
	// multiset 允许插入重复的值
	multSet.insert(10);
	multSet.insert(20);
	multSet.insert(10);
	multSet.insert(5);
	for_each(multSet.begin(), multSet.end(), [](int value) {
		cout << value << " ";
	});
	cout << endl;

	system("pause");
	return 0;
}
