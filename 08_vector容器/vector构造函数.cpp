//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//void printVector(vector<int> vec)
//{
//	for_each(vec.begin(), vec.end(), [](int value) {
//		cout << " " << value;
//	});
//	cout << endl;
//}
//
//// vector 构造函数
//int main()
//{
//	vector<int> vec; // 默认构造， 无参构造
//	for (int i = 0; i < 10; i++)
//	{
//		vec.push_back(i);
//	}
//	printVector(vec);
//
//	vector<int> vec1(vec.begin() + 2, vec.end());
//	printVector(vec1);
//	vector<int> vec2(10, 5);
//	printVector(vec2);
//	vector<int> vec3(vec);
//	printVector(vec3);
//	system("pause");
//	return 0;
//}