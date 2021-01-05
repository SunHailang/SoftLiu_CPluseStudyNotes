//#include <iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
//
//
//// 常用拷贝和替换算法 replace
//class ReplaceIF {
//public:
//	bool operator()(int value)
//	{
//		return value % 2 == 0;
//	}
//};
//int main()
//{
//	vector<int> vec;
//	for (size_t i = 0; i < 10; i++)
//	{
//		vec.push_back(i);
//	}
//	// 替换函数
//	// 将 %2 == 0 的数替换成 200
//	replace_if(vec.begin(), vec.end(), ReplaceIF(), 200);
//	for_each(vec.begin(), vec.end(), [](int value) {
//		cout << value << " ";
//	});
//	cout << endl;
//	system("pause");
//	return 0;
//}