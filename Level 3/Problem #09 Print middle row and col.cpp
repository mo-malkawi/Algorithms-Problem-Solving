#include <iostream>
#include<iomanip>
#include<vector>
#include "MyLib.h"
using namespace std;

void FillMatrix(short Matrix[3][3], short Rows, short Cols)
{
	short Counter = 1;

	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			Matrix[i][j] = random::RandomNumber(1,10);
		}
	}
}

void PrintMatrix(short Matrix[3][3], short Rows, short Cols)
{

	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			printf(" %0*d   ",2,Matrix[i][j]);
		}

		cout << endl;
	}
}

void PrintMiddleRowOfMatrix(short Matrix[3][3], short Rows, short Cols)
{
	short MiddleRow = Rows / 2;

	for (int i = 0; i < Rows; i++)
	{
		printf(" %0*d   ", 2, Matrix[MiddleRow][i]);
	}
	cout << "\n";

}

void PrintMiddleColOfMatrix(short Matrix[3][3], short Rows, short Cols)
{

	short MiddleCol = Cols / 2;
	for (int i = 0; i < Rows; i++)
	{
		printf(" %0*d   ", 2, Matrix[i][MiddleCol]);
	}
	cout << "\n";
}

int main()
{
	short Matrix[3][3];
	short row[3], col[3];

	FillMatrix(Matrix, 3, 3);

	cout << "Matrix1:\n";
	PrintMatrix(Matrix, 3, 3);

	cout << "\nMiddle Row of Matrix is:\n";
	PrintMiddleRowOfMatrix(Matrix, 3, 3);

	cout << "\nMidlle Col of Matrix is:\n";
	PrintMiddleColOfMatrix(Matrix, 3, 3);


}