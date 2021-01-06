//#include <iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
//
//// 常用集合算法 set_intersection
//int main()
//{
//	vector<int> vec1;
//	vector<int> vec2;
//	for (size_t i = 0; i < 10; i++)
//	{
//		vec1.push_back(i);
//		vec2.push_back(5 + i);
//	}
//	// 声明一个目标容器
//	vector<int> destVec;
//	// 给目标容器提前开辟空间
//	// 最特殊情况， 大容器包含小容器  开辟的空间取小容器的size
//	int destSize = vec1.size() < vec2.size() ? vec1.size() : vec2.size();
//	destVec.resize(destSize);
//	vector<int>::iterator destEnd = set_intersection(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), destVec.begin());
//	vector<int> tarVec = vector<int>(destVec.begin(), destEnd);
//	for_each(tarVec.begin(), tarVec.end(), [](int value) {
//		cout << value << " ";
//	});
//	cout << endl;
//
//	system("pause");
//	return 0;
//}