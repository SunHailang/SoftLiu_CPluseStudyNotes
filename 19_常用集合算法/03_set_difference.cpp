#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

// 常用集合算法 set_difference
int main()
{
	vector<int> vec1;
	vector<int> vec2;
	for (size_t i = 0; i < 10; i++)
	{
		vec2.push_back(10 + i);
	}
	vec1.push_back(2);
	vec1.push_back(3);
	vec1.push_back(4);
	// 声明一个目标容器
	vector<int> destVec;
	// 给目标容器提前开辟空间
	// 最特殊情况， 两个容器没有一样 的元素  开辟的空间取容器1的大小
	int destSize = vec1.size();
	destVec.resize(destSize);
	// 求两个容器的差集 vec1 - vec2
	vector<int>::iterator destEnd = set_difference(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), destVec.begin());
	vector<int> tarVec = vector<int>(destVec.begin(), destEnd);
	for_each(tarVec.begin(), tarVec.end(), [](int value) {
		cout << value << " ";
	});
	cout << endl;

	system("pause");
	return 0;
}