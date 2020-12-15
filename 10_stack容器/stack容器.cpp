#include <iostream>
#include <stack>
#include <string>

using namespace std;



int main()
{
	// 构造函数
	stack<int> stk;
	cout << "Empty: " << (stk.empty() ? "true" : "false") << endl;
	stk.push(10);
	stk.push(20);
	cout << "Start Size: " << stk.size() << endl;
	while (!stk.empty())
	{
		cout << stk.top() << " ";
		stk.pop();
	}
	cout << endl;
	cout << "End Size: " << stk.size() << endl;

	system("pause");
	return 0;
}