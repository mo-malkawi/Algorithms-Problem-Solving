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
            Matrix[i][j] = random::RandomNumber(0, 10);
        }
    }
}

void PrintMatrix(short Matrix[3][3], short Rows, short Cols)
{

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            printf(" %d   ", Matrix[i][j]);
        }
        cout << endl;
    }

}

bool IsScalarMatrix(short Matrix1[3][3], short Rows, short Cols)
{
    short FirstDiagElement = Matrix1[0][0];

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            if (i == j && Matrix1[i][j] != FirstDiagElement)
            {
                return false;
            }
            else if (i != j && Matrix1[i][j] != 0)
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    srand((unsigned)time(NULL));

    short Matrix1[3][3] =
    { {9,0,0},
      {0,9,0},
      {0,0,9} };

    // FillMatrixWithRandomNumbers(Matrix1, 3, 3);

    cout << "Matrix1:\n";
    PrintMatrix(Matrix1, 3, 3);

    if (IsScalarMatrix(Matrix1, 3, 3))
        cout << "\nYes: Matrix is Scalar.\n";
    else
        cout << "\nNo: Matrix is NOT Scalar.\n";

}
