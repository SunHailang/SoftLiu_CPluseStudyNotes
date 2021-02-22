#include <iostream>
#include <vector>
#include <algorithm>

/*
	给定一个 n × n 的二维矩阵 matrix 表示一个图像。请你将图像顺时针旋转 90 度。

	你必须在 原地 旋转图像，这意味着你需要直接修改输入的二维矩阵。请不要 使用另一个矩阵来旋转图像。

提示：

	matrix.length == n
	matrix[i].length == n
	1 <= n <= 20
	-1000 <= matrix[i][j] <= 1000

*/

int main()
{
	std::cout << "***  48. 旋转图像  ***" << std::endl;

	std::vector<std::vector<int>> matrix = { {1, 2, 3},{4, 5, 6},{7, 8, 9} };

	int n = matrix.size();
	
	std::vector<std::vector<int>> vec;

	for (int i = 0; i < n; i++)
	{
		std::vector<int> vecX;
		// 行 matrix[i] 变成 列 matrix..[n - 1 - i]
		for (int j = 0; j < n; j++)
		{
			// 第i列j行的数据
			int c1 = matrix[n - 1 - j][i];
			vecX.push_back(c1);
		}
		vec.push_back(vecX);
	}

	std::for_each(vec.begin(), vec.end(), [](std::vector<int> value1) {
		std::for_each(value1.begin(), value1.end(), [](int value) {
			std::cout << value << " ";
		});
		std::cout << std::endl;
	});
	std::cout << std::endl;

	/*
		时间复杂度： O(n^2)
		空间复杂度： O(n^2)
	*/

	std::system("pause");
	return 0;
}

/*
	时间复杂度： O(n^2)
	空间复杂度： O(1)
*/
void rotate(std::vector<std::vector<int>>& matrix) 
{
	int n = matrix.size();
	// 水平翻转
	for (int i = 0; i < n / 2; ++i) {
		for (int j = 0; j < n; ++j) {
			std::swap(matrix[i][j], matrix[n - i - 1][j]);
		}
	}
	// 主对角线翻转
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < i; ++j) {
			std::swap(matrix[i][j], matrix[j][i]);
		}
	}
}
