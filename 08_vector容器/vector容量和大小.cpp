//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//void printVector(vector<int> vec)
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
//// vector 容量和大小
//int main()
//{
//	vector<int> vec; // 默认构造， 无参构造
//	for (int i = 0; i < 10; i++)
//	{
//		vec.push_back(i);
//	}
//	printVector(vec);
//
//	if (vec.empty())
//	{
//		cout << "Vector is Empty." << endl;
//	}
//	else
//	{
//		cout << "Vector is Not Empty." << endl;
//
//		cout << "vec size: " << vec.size() << endl; // 大小
//		cout << "vec capacity: " << vec.capacity() << endl; // 容量 大于等于 大小
//	}
//	// 重新指定大小
//	//vec.resize(15); // 如果重新指定的比原来的长了， 默认用 0 填充
//	//printVector(vec);
//
//	vec.resize(15, 100); // 如果重新指定的比原来的长了， 指定使用 100 填充
//	printVector(vec);
//
//	vec.resize(5);		// 如果重新指定的比原来的短了， 超出的部分被删除
//	printVector(vec);
//
//	system("pause");
//	return 0;
//}