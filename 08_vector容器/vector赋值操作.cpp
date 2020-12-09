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
//// vector 赋值操作
//int main()
//{
//	vector<int> vec; // 默认构造， 无参构造
//	for (int i = 0; i < 10; i++)
//	{
//		vec.push_back(i);
//	}
//	printVector(vec);
//
//	vector<int> vec1 = vec;
//	printVector(vec1);
//	vector<int> vec2;
//	vec2.assign(vec.begin(), vec.end());
//	printVector(vec2);
//	vector<int> vec3;
//	vec3.assign(10, 9);
//	printVector(vec3);
//
//	system("pause");
//	return 0;
//}