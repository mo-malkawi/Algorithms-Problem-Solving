#include <iostream>
#include<iomanip>
#include "MyLib.h"

using namespace std;

void FillMatrixWithRandomNumbers(short Matrix[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            Matrix[i][j] = random::RandomNumber(1, 10);
        }
    }
}

void PrintMatrix(short Matrix[3][3], short Rows, short Cols)
{

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            printf(" %0*d   ", 2, Matrix[i][j]);
        }
        cout << endl;
    }

}

int SumOfMatrix(short Matrix[3][3], short Rows, short Cols)
{
    int Sum = 0;

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            Sum += Matrix[i][j];
        }
    }
    return Sum;
}

bool AreEqualMatrices(short Matrix1[3][3], short Matrix2[3][3], short Rows, short Cols)
{
    return (SumOfMatrix(Matrix1, Rows, Cols) == SumOfMatrix(Matrix2, Rows, Cols));

}

int main()
{
    srand((unsigned)time(NULL));

    short Matrix1[3][3];
    short Matrix2[3][3];

    FillMatrixWithRandomNumbers(Matrix1, 3, 3);
    FillMatrixWithRandomNumbers(Matrix2, 3, 3);

    cout << "Matrix1:\n";
    PrintMatrix(Matrix1, 3, 3);
    cout << "\nMatrix2:\n";
    PrintMatrix(Matrix2, 3, 3);

    if (AreEqualMatrices(Matrix1, Matrix2, 3, 3))
        cout << "\nYes: both matrices are equal.\n";
    else
        cout << "\nNo: matrices are NOT equal.\n";

}
