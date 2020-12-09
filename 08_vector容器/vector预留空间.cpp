#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
// vector 预留空间
int main()
{
	vector<int> vec; // 默认构造， 无参构造
	int capacity = 0;
	int * p = NULL;
	int num = 0;
	vec.reserve(100000);
	for (int i = 0; i < 100000; i++)
	{
		// 尾部插入数据
		vec.push_back(i);
		if (p != &vec[0])
			//if (capacity != vec.capacity())
		{
			capacity = vec.capacity();
			p = &vec[0];
			num++;
		}
	}
	// 重新开辟的内存次数  reserve 之前：30次   之后：1次
	cout << "num: " << num << endl;
	cout << "vec capacity:" << vec.capacity() << endl;
	cout << "vec size:" << vec.size() << endl;



	system("pause");
	return 0;
}