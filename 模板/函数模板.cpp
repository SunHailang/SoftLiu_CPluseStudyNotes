#include <iostream>

using namespace std;

// 函数模板

// 交换两个数
template<typename T>
void mySwap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}


// 排序模板 对数组的降序排序
template<typename T>
void mySort(T * arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		int max = i;
		for (int j = i + 1; j < len; j++)
		{
			if (arr[max] < arr[j])
			{
				max = j;
			}
		}
		if (max != i)
		{
			T temp = arr[i];
			arr[i] = arr[max];
			arr[max] = temp;
		}
	}
}


//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	////利用函数模板交换数据
//	//// 两种方式使用函数模板
//	//// 1. 自动类型推导
//	//mySwap(a, b);
//	//cout << "a=" << a << endl;
//	//cout << "b=" << b << endl;
//	//// 2. 显示指定类型
//	//mySwap<int>(a, b);
//	//cout << "a=" << a << endl;
//	//cout << "b=" << b << endl;
//
//	// 排序
//	char charArr[] = "abfde";
//	int len = sizeof(charArr) / sizeof(charArr[0]);
//	mySort<char>(charArr, len);
//	
//	for (int i = 0; i < len; i++)
//	{
//		cout << charArr[i];
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}