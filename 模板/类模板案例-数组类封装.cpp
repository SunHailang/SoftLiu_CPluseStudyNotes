#include <iostream>
#include <string>

#include "MyArray.hpp"

using namespace std;

void test01()
{
	MyArray<int> arr1(5);

	cout << "arr1: " << arr1.GetSize() << " , " << arr1.GetCapacity() << endl;

	MyArray<int> arr2(arr1);
	cout << "arr2: " << arr2.GetSize() << " , " << arr2.GetCapacity() << endl;

	MyArray<int> arr3(1);

	arr3 = arr2 = arr1;
	arr3.Add(6);
	cout << "arr3: " << arr3.GetSize() << " , " << arr3.GetCapacity() << " , " << arr3.GetArrayData(0) << endl;
}


int main()
{
	test01();


	system("pause");
	return 0;
}
