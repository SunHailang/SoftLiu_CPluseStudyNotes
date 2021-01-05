//#include <iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
//
//// 常用排序算法 merge
//
//
//int main()
//{
//	vector<int> vec1;
//	vector<int> vec2;
//	for (size_t i = 0; i < 10; i++)
//	{
//		vec1.push_back(i);
//		vec2.push_back(i + 2);
//	}
//	vector<int> destVec;
//	destVec.resize(vec1.size() + vec2.size());
//	merge(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), destVec.begin());
//	for_each(destVec.begin(), destVec.end(), [](int value) {
//		cout << value << " ";
//	});
//	cout << endl;
//
//	system("pause");
//	return 0;
//}