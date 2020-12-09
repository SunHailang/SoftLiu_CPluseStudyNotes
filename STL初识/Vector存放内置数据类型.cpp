//#include <iostream>
//#include <vector>
//#include <algorithm>// 标准算法的头文件
//using namespace std;

//int main()
//{
//	vector<int> vec;
//	// 尾部插入元素
//	vec.push_back(10);
//	vec.push_back(20);
//	vec.push_back(30);
//	vec.push_back(40);
//	vec.push_back(50);
//	// 插入元素 在第2个元素后面插入 25;
//	vec.insert(vec.begin() + 2, 25);
//	// 删除元素  删除第 2 个元素
//	vec.erase(vec.begin() + 1);
//	// 使用下标访问元素
//	cout << "Vector Second Data:" << vec[2] << endl;
//	// 容器大小
//	cout << "Vector Size:" << vec.size() << endl;
//	// 通过迭代器访问容器中的数据
//	vector<int>::iterator itBegin = vec.begin();// 指向第一个元素
//	vector<int>::iterator itEnd = vec.end(); // 指向最后一个元素的下一个元素
//											 // 第一种遍历方式
//	while (itBegin != itEnd)
//	{
//		cout << *itBegin << endl;
//		itBegin++;
//	}
//	// 第二种遍历方式
//	for (vector<int>::iterator itBegin2 = vec.begin(); itBegin2 != vec.end(); itBegin2++)
//	{
//		cout << *itBegin2 << endl;
//	}
//	// 第三种遍历方式
//	for_each(vec.begin(), vec.end(), [](int value)
//	{
//		cout << value << endl;
//	});
//	// 清空 容器  清空之后，vec.size()为0
//	vec.clear();
//
//	system("pause");
//	return 0;
//}