#include <iostream>
using namespace std;
#include <vector>
#include <numeric>
#include <string>

// 常用的算术生成算法 accumulate
int main()
{
	vector<int> vec;
	for (size_t i = 0; i <= 100; i++)
	{
		vec.push_back(i);
	}

	// 5050	
	int sum = accumulate(vec.begin(), vec.end(), 50);
	cout << "sum = " << sum << endl;

	system("pause");
	return 0;
}