#include "logic.h"

int create_sum_horizontally(int** matrix, int size, int index) {
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += matrix[index][i];
	}
	return 0;
}


int create_sum_vertical(int** matrix, int size, int index) {
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += matrix[i][index];
	}
	return 0;
}

int create_sum_first_diagonal(int** matrix, int size, int index) {
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += matrix[i][size - i - 1];
	}
	return 0;
}

int create_sum_second_diagonal(int** matrix, int size, int index) {
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += matrix[i][i];
	}
	return 0;
}

bool examination_matrix(int** matrix, int size) {
	bool flag = true;
	int mainV = create_sum_vertical(matrix, size, 0);
	int mainH = create_sum_horizontally(matrix, size, 0);
	int first_diagonal = create_sum_first_diagonal(matrix, size, 0);
	int second_diagonal = create_sum_second_diagonal(matrix, size, 0);

	for (int i = 0; i < size; i++)
	{
		int horizontally = create_sum_horizontally(matrix, size, i);
		if (mainV != horizontally)
		{
			flag = false;
			return flag;
		}
	}

	for (int i = 0; i < size; i++)
	{
		int vertical = create_sum_vertical(matrix, size, i);
		if (mainH != vertical)
		{
			flag = false;
			return flag;
		}
	}

	if (first_diagonal != second_diagonal) {
		flag = false;
		return flag;
	}

	if (first_diagonal != mainH) {
			flag = false;
			return flag;
	}

	return flag;
}