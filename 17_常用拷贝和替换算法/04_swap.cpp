#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>


// 常用拷贝和替换算法 swap
class ReplaceIF {
public:
	bool operator()(int value)
	{
		return value % 2 == 0;
	}
};
int main()
{
	vector<int> vec;
	for (size_t i = 0; i < 10; i++)
	{
		vec.push_back(i);
	}
	// swap 互换函数
	swap(vector<int>(), vec);

	for_each(vec.begin(), vec.end(), [](int value) {
		cout << value << " ";
	});
	cout << endl;
	system("pause");
	return 0;
}