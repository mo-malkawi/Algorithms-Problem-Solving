#include <iostream>
#include<iomanip>
#include "MyLib.h"
using namespace std;

void FillMatrix(short Matrix[3][3], short Rows, short Cols)
{

	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			Matrix[i][j] = random::RandomNumber(1,10);
		}
	}
}

void MultiplyMatrices(short Matrix1[3][3], short Matrix2[3][3],
	short ResultMatrix[3][3], short Rows, short Cols)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			ResultMatrix[i][j] = Matrix1[i][j] * Matrix2[i][j];
		}
	}
}

void PrintMatrix(short Matrix[3][3], short Rows, short Cols)
{


	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			printf("%0*d    ",2,Matrix[i][j]);
		}

		cout << endl;
	}
}

int main()
{
	srand((unsigned)time(NULL));

	short Matrix1[3][3];
	short Matrix2[3][3];
	short ResultMatrix[3][3];

	FillMatrix(Matrix1, 3, 3);
	FillMatrix(Matrix2, 3, 3);

	cout << "Matrix1:\n";
	PrintMatrix(Matrix1, 3, 3);

	cout << "\nMatrix2:\n";
	PrintMatrix(Matrix2, 3, 3);

	MultiplyMatrices(Matrix1, Matrix2, ResultMatrix, 3, 3);

	cout << "\nResults:\n";
	PrintMatrix(ResultMatrix,3,3);

}