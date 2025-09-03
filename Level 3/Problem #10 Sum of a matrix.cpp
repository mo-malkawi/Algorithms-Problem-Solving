#include <iostream>
#include<iomanip>
#include "MyLib.h"

using namespace std;

void FillMatrixWithRandomNumbers(int Matrix[3][3] ,short Rows ,short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            Matrix[i][j] = random::RandomNumber(1, 10);
        }
    }
}

void PrintMatrix(int Matrix[3][3], short Rows, short Cols)
{
    cout << "The following is a 3x3 random matrix:\n";

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            printf(" %0*d   ", 2, Matrix[i][j]);
        }
        cout << endl;
    }

}

int SumOfMatrix(int Matrix[3][3], short Rows, short Cols)
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

int main()
{
    srand((unsigned)time(NULL));

    int Matrix[3][3];

    FillMatrixWithRandomNumbers(Matrix,3,3);

    PrintMatrix(Matrix,3,3);

    cout << "\nSum of Matrix is: " << SumOfMatrix(Matrix, 3, 3) << endl;

}
