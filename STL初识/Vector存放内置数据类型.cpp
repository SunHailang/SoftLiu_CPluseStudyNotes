#include <iostream>
#include <vector>
#include <algorithm>// 标准算法的头文件
using namespace std;

void test01()
{
	vector<int> v1;
	// 向容器中插入数据
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	// 通过迭代器访问容器中的数据
	vector<int>::iterator itBegin = v1.begin();// 指向第一个元素
	vector<int>::iterator itEnd = v1.end(); // 指向最后一个元素的下一个元素
	// 第一种遍历方式
	while (itBegin != itEnd)
	{
		cout << *itBegin << endl;
		itBegin++;
	}
	// 第二种遍历方式
	for (vector<int>::iterator itBegin2 = v1.begin(); itBegin2 != v1.end(); itBegin2++)
	{
		cout << *itBegin2 << endl;
	}
	// 第三种遍历方式
	for_each(v1.begin(), v1.end(), [](int value) 
	{
		cout << value << endl;
	});
}

int main()
{
	test01();


	system("pause");
	return 0;
}