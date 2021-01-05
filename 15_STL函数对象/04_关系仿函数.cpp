//#include <iostream>
//#include <functional>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//void printVector(const vector<int> &vec)
//{
//	for_each(vec.begin(), vec.end(), [](int value) {
//		cout << value << " ";
//	});
//	cout << endl;
//}
//
//// 关系仿函数
//int main()
//{
//	// 大于
//	vector<int> vec;
//	vec.push_back(1);
//	vec.push_back(5);
//	vec.push_back(2);
//	vec.push_back(4);
//	vec.push_back(3);
//
//	for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//	// 升序
//	sort(vec.begin(), vec.end());
//	printVector(vec);
//	// 降序
//	sort(vec.begin(), vec.end(), greater<int>());
//	printVector(vec);
//	cout << "-------------------" << endl;
//	// 等于
//	equal_to<int> et;
//	cout << "3 == 3 result:" << (et(3, 3) ? "true" : "false") << endl;
//	// 不等于
//	not_equal_to<int> neq;
//	cout << "3 != 3 result:" << (neq(3, 3) ? "true" : "false") << endl;
//	// 大于
//	greater<int>gr;
//	cout << "5 > 3 result:" << (gr(5, 3) ? "true" : "false") << endl;
//	// 大于等于
//	greater_equal<int> grq;
//	cout << "5 >= 3 result:" << (grq(5, 3) ? "true" : "false") << endl;
//	// 小于
//	less<int> le;
//	cout << "5 < 3 result:" << (le(5, 3) ? "true" : "false") << endl;
//	// 小于等于
//	less_equal<int> leq;
//	cout << "5 <= 3 result:" << (leq(5, 3) ? "true" : "false") << endl;
//	system("pause");
//	return 0;
//}
//
