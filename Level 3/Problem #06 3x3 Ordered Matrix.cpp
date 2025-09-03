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
}

void PrintMatrix(short Matrix[3][3],short Rows , short Cols)
{
	cout << "The following is a 3x3 ordered matrix:\n";

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

	FillMatrix(Matrix,3,3);
	PrintMatrix(Matrix,3,3);

} 