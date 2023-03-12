#include "logic.h"

int main() {
	int size;

	cout << "Input size for matrix: ";
	do
	{
		cin >> size;
	} while (size < 3);

	int** matrix = new int* [size];
	for (int i = 0; i < size; i++)
	{
		matrix[i] = new int[size];
	}

	for (int j = 0; j < size; j++) {
		for (int i = 0; i < size; i++) {
			cin >> matrix[j][i];
		}
	}
	string msg = examination_matrix(matrix, size) ? "Matrix is magic square" : "Matrix is not magic square";
	//rand_init(matrix, size, 9, 0);

	cout << msg << endl;



	return 0;
}