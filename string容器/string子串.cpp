#include <iostream>
#include <string>

using namespace std;
// string 字符串子串
int main()
{
	string str("abcdefg");
	cout << "str = " << str << endl;

	string substr = str.substr(1, 3);
	cout << "substr = " << substr << endl;

	string email = "hello@emil.com";
	int pos = email.find('@');
	if (pos >= 0)
	{
		cout << "emil name: " << email.substr(0, pos) << endl;
	}
	else
	{
		cout << "not Email." << endl;
	}

	system("pause");
	return 0;
}