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
//// vector 数据存取
//int main()
//{
//	vector<int> vec; // 默认构造， 无参构造
//	for (int i = 0; i < 10; i++)
//	{
//		// 尾部插入数据
//		vec.push_back(i);
//	}
//	printVector(vec);
//
//	int elem = vec[2];
//
//	int elem1 = vec.at(3);
//	cout << "[2]= " << elem << ",  at(3)= " << elem1 << endl;
//
//	cout << "first= " << vec.front() << ",  end= " << vec.back() << endl;
//
//	system("pause");
//	return 0;
//}