#include "util.h"


void rand_init(int** matrix, int size, int max, int min) {

	for (int j = 0; j < size; j++) {
		for (int i = 0; i < size; i++) {
			matrix[j][i] = rand() % (max - min + 1) + min;
		}
	}


}

string show(int** matrix, int size) {
	string msg = "";
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			msg += to_string(matrix[i][j]) + " ";
		}
		msg += "\n";
	}
	return msg;
}