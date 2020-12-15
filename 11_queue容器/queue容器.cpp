#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main()
{
	queue<int> que;

	que.push(10);
	que.push(20);
	cout << "front: " << que.front() << endl;
	cout << "back: " << que.back() << endl;
	cout << "Size: " << que.size() << endl;
	while (!que.empty())
	{
		cout << que.front() << " ";
		que.pop();
	}
	cout << endl;
	cout << "Empty: " << (que.empty() ? "true" : "false") << endl;

	system("pause");
	return 0;
}