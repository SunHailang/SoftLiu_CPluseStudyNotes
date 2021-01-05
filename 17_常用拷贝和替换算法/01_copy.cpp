//#include <iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
//
//
//// 常用拷贝和替换算法 copy
//int main()
//{
//	vector<int> vec;
//	for (size_t i = 0; i < 10; i++)
//	{
//		vec.push_back(i);
//	}
//	vector<int> vec1;
//	// 目标容器需要提前开辟空间
//	vec1.resize(vec.size());
//	// 拷贝函数
//	copy(vec.begin(), vec.end(), vec1.begin());
//	for_each(vec1.begin(), vec1.end(), [](int value) {
//		cout << value << " ";
//	});
//	cout << endl;
//	system("pause");
//	return 0;
//}