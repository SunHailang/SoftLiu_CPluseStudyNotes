#include <iostream>
#include <vector>
#include <algorithm>

/*
	编写一个高效的算法来判断 m x n 矩阵中，是否存在一个目标值。该矩阵具有如下特性：

	每行中的整数从左到右按升序排列。
	每行的第一个整数大于前一行的最后一个整数。

提示：

	m == matrix.length
	n == matrix[i].length
	1 <= m, n <= 100
	-10^4 <= matrix[i][j], target <= 10^4
*/

bool searchMatrix(std::vector<std::vector<int>>& matrix, int target);

int main()
{
	std::cout << "Hello World!" << std::endl;

	int matrixX[3][4] = { {1, 3, 5, 7}, {10, 11, 16, 20},{23, 30, 34, 60 } };

	std::vector<std::vector<int>> matrix;

	for (size_t i = 0; i < 3; i++)
	{
		std::vector<int> vectar;
		for (size_t j = 0; j < 4; j++)
		{
			vectar.push_back(matrixX[i][j]);
		}
		matrix.push_back(vectar);
	}
	for_each(matrix.begin(), matrix.end(), [](std::vector<int> value1) {
		for_each(value1.begin(), value1.end(), [](int value) {
			std::cout << value << " ";
		});
		std::cout << std::endl;
	});
	std::cout << std::endl;

	bool rowSuccess = false;

	int target = 10;
	// -10^4 <= matrix[i][j], target <= 10^4

	//rowSuccess = searchMatrix(matrix, target);

	int m = matrix.size();
	if (m > 0) 
	{
		for (int i = 0; i < m; i++)
		{
			int n = matrix[i].size();
			if (target >= matrix[i][0] && target <= matrix[i][n - 1])
			{
				int left = 0;
				int right = n - 1;
				if (matrix[i][left] == target) return true;
				if (matrix[i][right] == target) return true;
				
				while (left < right)
				{
					int mind = (left + right) >> 1;
					if (target > matrix[i][mind]) left = mind;
					else if(target < matrix[i][mind]) right = mind;
					else return true;
					if (right - left == 1) break;
				}

				//for (int j = 0; j < n; j++)
				//{
				//	int value = matrix[i][j];
				//	if (value == target)
				//		rowSuccess = true;
				//}
				break;
			}
		}
	}


	std::cout << "Success:: " << rowSuccess << std::endl;

	std::system("pause");
	return 0;
}

bool searchMatrix(std::vector<std::vector<int>>& matrix, int target) {
	int m = matrix.size();
	if (m == 0) return false;
	int n = matrix[0].size();

	// 二分查找
	int left = 0, right = m * n - 1;
	int pivotIdx, pivotElement;
	while (left <= right) {
		pivotIdx = (left + right) / 2;
		pivotElement = matrix[pivotIdx / n][pivotIdx % n];
		if (target == pivotElement) return true;
		else {
			if (target < pivotElement) right = pivotIdx - 1;
			else left = pivotIdx + 1;
		}
	}
	return false;
}
