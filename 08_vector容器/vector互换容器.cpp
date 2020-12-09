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
//	for (int i = 0; i < 10000; i++)
//	{
//		// 尾部插入数据
//		vec.push_back(i);
//	}
//	//cout << "vec= ";
//	//printVector(vec);
//
//	//vector<int> vec1;
//	//for (int i = 0; i < 5; i++)
//	//{
//	//	vec1.insert(vec1.begin() + i, i);
//	//}
//	//cout << "vec1= ";
//	//printVector(vec1);
//	//cout << "swap befor -> after" << endl;
//	//vec1.swap(vec);
//	//cout << "vec= ";
//	//printVector(vec);
//	//cout << "vec1= ";
//	//printVector(vec1);
//	// 可以巧用 swap 可以收缩内存空间
//	cout << "vec capacity:" << vec.capacity() << endl; // 12138
//	cout << "vec size:" << vec.size() << endl; // 10000
//	vec.resize(3);
//	cout << "vec capacity:" << vec.capacity() << endl; // 12138
//	cout << "vec size:" << vec.size() << endl; // 3
//	// vector<int>(vec) 匿名对象  当 匿名对象这行执行完了， 系统会自动帮助回收匿名对象所占的内存
//	vector<int>(vec).swap(vec);
//	cout << "vec capacity:" << vec.capacity() << endl; // 3
//	cout << "vec size:" << vec.size() << endl; // 3
//
//
//	system("pause");
//	return 0;
//}