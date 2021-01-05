//#include <iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
//
//// 普通函数
//void print01(int value)
//{
//	cout << value << " ";
//}
//// 仿函数
//class print02
//{
//public:
//	void operator()(int value)
//	{
//		cout << value << " ";
//	}
//};
//
//// for_each 遍历
//void test01()
//{
//	vector<int> vec;
//	for (size_t i = 0; i < 10; i++)
//	{
//		vec.push_back(i);
//	}
//	// 普通函数
//	for_each(vec.begin(), vec.end(), print01);
//	cout << endl;
//	// 仿函数
//	for_each(vec.begin(), vec.end(), print02());
//	cout << endl;
//	// 匿名函数
//	for_each(vec.begin(), vec.end(), [](int value) {
//		cout << value << " ";
//	});
//	cout << endl;
//}
//// transform
//class Transform
//{
//public:
//	int operator()(int a)
//	{
//		return a + 10;
//	}
//};
//void test02()
//{
//	vector<int> vec;
//	for (size_t i = 0; i < 10; i++)
//	{
//		vec.push_back(10-i);
//	}
//	// 仿函数
//	for_each(vec.begin(), vec.end(), print02());
//	cout << endl;
//	vector<int> vec2;
//	vec2.resize(vec.size());
//	transform(vec.begin(), vec.end(), vec2.begin(), Transform());
//	// 仿函数
//	for_each(vec2.begin(), vec2.end(), print02());
//	cout << endl;
//}
//
//int main()
//{
//	// for_each 遍历
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}