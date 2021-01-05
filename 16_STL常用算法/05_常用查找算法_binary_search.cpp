//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//// 常用查找算法 binary_search
//
//int main()
//{
//	vector<int> vec;
//	vec.push_back(0);
//	vec.push_back(1);
//	vec.push_back(2);
//	vec.push_back(12);
//	vec.push_back(10);
//	vec.push_back(3);
//	vec.push_back(4);
//
//	sort(vec.begin(), vec.end());
//	// 注意这个 容器 必须是一个有序的序列， 如果是无序的序列结果是未知
//	bool result = binary_search(vec.begin(), vec.end(), 10);
//
//	cout << (result ? "find" : "not find") << endl;
//
//	system("pause");
//	return 0;
//}