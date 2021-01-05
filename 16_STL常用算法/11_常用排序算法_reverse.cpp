#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

// 常用排序算法 reverse


int main()
{
	vector<int> vec1;
	for (size_t i = 0; i < 10; i++)
	{
		vec1.push_back(i);
	}

	// 反转
	reverse(vec1.begin(), vec1.end());
	for_each(vec1.begin(), vec1.end(), [](int value) {
		cout << value << " ";
	});
	cout << endl;

	system("pause");
	return 0;
}