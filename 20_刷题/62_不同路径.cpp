#include <iostream>
#include <vector>

/*
	一个机器人位于一个 m x n 网格的左上角 （起始点在下图中标记为 “Start” ）。

	机器人每次只能向下或者向右移动一步。机器人试图达到网格的右下角（在下图中标记为 “Finish” ）。

	问总共有多少条不同的路径？

提示：

	1 <= m, n <= 100
	题目数据保证答案小于等于 2 * 109
*/

int main()
{
	std::cout << "***  62. 不同路径  ***" << std::endl;

	int m = 7;
	int n = 3;

	std::vector<std::vector<int>> f(m, std::vector<int>(n));

	for (int i = 0; i < m; i++)
	{
		f[i][0] = 1;
	}
	for (int i = 0; i < n; i++)
	{
		f[0][i] = 1;
	}
	for (int i = 1; i < m; i++)
	{
		for (int j = 1; j < n; j++)
		{
			f[i][j] = f[i - 1][j] + f[i][j - 1];
		}
	}
	/*
		时间复杂度： O(m * n)
		空间复杂度： O(m * n)
	*/
	std::cout << "Path: " << f[m - 1][n - 1] << std::endl;

	std::system("pause");
	return 0;
}

/*
	时间复杂度： O(min(m, n))
	空间复杂度： O(1)
*/
int uniquePaths(int m, int n)
{
	long long ans = 1;
	for (int x = n, y = 1; y < m; ++x, ++y) {
		ans = ans * x / y;
	}
	return ans;
}