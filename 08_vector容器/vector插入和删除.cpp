//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//void printVector(vector<int> &vec)
//{
//	for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
//	{
//		cout << " " << *it;
//	}
//	//for_each(vec.begin(), vec.end(), [](int value) {
//	//	cout << " " << value;
//	//});
//	cout << endl;
//}
//
//// vector 插入和删除
//int main()
//{
//	vector<int> vec; // 默认构造， 无参构造
//	for (int i = 0; i < 10; i++)
//	{
//		// 尾部插入数据
//		vec.push_back(i);
//	}
//	printVector(vec);
//	// 尾部数据被删除
//	vec.pop_back();
//	printVector(vec);
//
//	vec.insert(vec.begin() + 1, 100);
//	printVector(vec);
//
//	vec.insert(vec.begin(), 2, 1000);
//	printVector(vec);
//
//	vec.erase(vec.begin());
//	printVector(vec);
//
//	vec.erase(vec.begin(), vec.begin() + 3);
//	printVector(vec);
//
//	system("pause");
//	return 0;
//}