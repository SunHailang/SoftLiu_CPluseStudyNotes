#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>

using namespace std;

void printVector(const vector<bool> &vec)
{
	for_each(vec.begin(), vec.end(), [](bool value) {
		cout << (value ? "true" : "false") << " ";
	});
	cout << endl;
}

// 逻辑仿函数
int main()
{
	// 逻辑非
	vector<bool> vec;
	vec.push_back(true);
	vec.push_back(false);
	vec.push_back(true);
	vec.push_back(false);
	printVector(vec);

	// 利用逻辑非 将 vec 搬运到 vec2 中
	vector<bool> vec2;
	// 搬运之前要先在目标容器中开辟空间
	vec2.resize(vec.size());

	transform(vec.begin(), vec.end(), vec2.begin(), logical_not<bool>());
	printVector(vec2);

	logical_and<bool> loa;
	cout << loa(1, 0) << endl;

	logical_not<bool> lon;
	cout << lon(false) << endl;

	logical_or<int> loo;
	cout << loo(1, 0) << endl;

	system("pause");
	return 0;
}

