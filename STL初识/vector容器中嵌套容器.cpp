#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
// 容器嵌套容器

int main()
{
	vector<vector<int>> vec;
	// 循环添加容器元素
	for (int i = 0; i < 5; i++)
	{
		vector<int> v;
		for (int j = 0; j < 5; j++)
		{
			v.insert(v.begin() + j, j + i);
		}
		vec.push_back(v);
	}
	// 遍历 容器元素
	for (vector<vector<int>>::iterator it = vec.begin(); it != vec.end(); it++)
	{
		vector<int> v = *it;
		for (vector<int>::iterator it1 = v.begin(); it1 != v.end(); it1++)
		{
			cout << *it1 << "  ";
		}
		cout << endl;
	}
	cout << "---------------------" << endl;
	for_each(vec.begin(), vec.end(), [](vector<int> v) {
		for_each(v.begin(), v.end(), [](int value) {
			cout << value << "  ";
		});
		cout << endl;
	});


	system("pause");
	return 0;
}