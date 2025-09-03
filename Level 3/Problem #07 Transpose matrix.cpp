#include <iostream>
#include<iomanip>
#include "MyLib.h"
using namespace std;

void FillMatrix(short Matrix[3][3], short Rows, short Cols)
{
	short Counter = 1;

	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			Matrix[i][j] = Counter++;
		}
	}
}\

void TransposeMatrix(short Matrix[3][3], short TransposedMatrix[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			TransposedMatrix[i][j] = Matrix[j][i];
		}
	}
}

void PrintMatrix(short Matrix[3][3], short Rows, short Cols)
{
	

	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			cout << Matrix[i][j] << "     ";
		}

		cout << endl;
	}
}

int main()
{
	short Matrix[3][3];
	short TransposedMatrix[3][3];

	FillMatrix(Matrix, 3, 3);
	cout << "The following is a 3x3 ordered matrix:\n";
	PrintMatrix(Matrix, 3, 3);

	TransposeMatrix(Matrix, TransposedMatrix,3,3);
	cout << "\n\nThe following is the transposed matrix:\n";
	PrintMatrix(TransposedMatrix, 3, 3);
}