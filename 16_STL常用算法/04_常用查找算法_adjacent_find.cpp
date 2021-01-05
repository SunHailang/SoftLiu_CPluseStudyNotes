//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//// 常用查找算法 adjacent_find
//
//int main()
//{
//	vector<int> vec;
//	vec.push_back(0);
//	vec.push_back(1);
//	vec.push_back(2);
//	vec.push_back(0);// 查找到的相邻重复元素的位置
//	vec.push_back(0);
//	vec.push_back(3);
//	vec.push_back(4);
//
//	vector<int>::iterator it = adjacent_find(vec.begin(), vec.end());
//	if (it == vec.end())
//	{
//		cout << "not find adjacent data" << endl;
//	}
//	else
//	{
//		cout << "find adjacent data: " << (*it) << endl;
//	}
//	system("pause");
//	return 0;
//}