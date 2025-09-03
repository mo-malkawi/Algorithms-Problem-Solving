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

bool IsIdentityMatrix(short Matrix1[3][3], short Rows, short Cols)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            if (i == j && Matrix1[i][j] != 1)
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
      { {1,0,0},
        {0,1,0},
        {0,0,1} };
    
   // FillMatrixWithRandomNumbers(Matrix1, 3, 3);

    cout << "Matrix1:\n";
    PrintMatrix(Matrix1, 3, 3);

    if (IsIdentityMatrix(Matrix1, 3, 3))
        cout << "\nYes: Matrix is Identity.\n";
    else
        cout << "\nNo: Matrix is NOT Identity.\n";

}
