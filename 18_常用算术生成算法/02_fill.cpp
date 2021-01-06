#include <iostream>
using namespace std;
#include <vector>
#include <numeric>
#include <string>
#include <algorithm>

// 常用的算术生成算法 fill
int main()
{
	vector<int> vec;
	vec.resize(10, 1);

	// fill 向容器中填充值
	fill(vec.begin(), vec.begin() + 2, 100);
	for_each(vec.begin(), vec.end(), [](int value) {
		cout << value << " ";
	});
	cout << endl;

	system("pause");
	return 0;
}