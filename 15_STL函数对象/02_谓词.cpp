#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


// 谓词  ->（仿函数的返回值类型是 bool 类型）
class GreateFive
{
public:
	// 一元谓词
	bool operator()(int value)
	{
		return value > 5;
	}
};
class MyCompare
{
public:
	// 二元谓词
	bool operator()(int value1, int value2)
	{
		return value1 > value2;
	}
};
int main()
{
	vector<int> vec;
	for (int i = 0; i < 10; i++)
	{
		vec.push_back(i);
	}
	// 查找容器中有没有大于5的
	vector<int>::iterator it = find_if(vec.begin(), vec.end(), GreateFive());
	if (it == vec.end())
	{
		cout << "not find" << endl;
	}
	else
	{
		cout << "find, value: " << (*it) << endl;
	}
	cout << "------------------------------" << endl;
	// 
	vec.push_back(15);
	vec.push_back(10);
	vec.push_back(6);
	// 默认升序排列
	sort(vec.begin(), vec.end());
	for_each(vec.begin(), vec.end(), [](int value) {
		cout << value<<" ";
	});
	cout << endl;
	cout << "------------------------------" << endl;
	sort(vec.begin(), vec.end(), MyCompare());
	//sort(vec.begin(), vec.end(), [](int value1, int value2)->bool {
	//	return value1 > value2;
	//});
	for_each(vec.begin(), vec.end(), [](int value) {
		cout << value << " ";
	});
	cout << endl;

	system("pause");
	return 0;
}

