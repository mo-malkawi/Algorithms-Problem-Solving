#include <iostream>
#include<iomanip>
#include <vector>
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
            cout << setw(2) << Matrix[i][j] << "   ";
        }
        cout << endl;
    }

}

bool IsNumberInMatrix(short Matrix[3][3], short Rows, short Cols, short Num)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (Matrix[i][j] == Num)
                return true;
        }

    }
    return false;
}

void PrintIntersectedNumbers(short Matrix1[3][3] ,short Matrix2[3][3] , short Rows ,short Cols)
{
    short Number = 0;

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            Number = Matrix1[i][j];

            if (IsNumberInMatrix(Matrix2, Rows, Cols, Number))
                cout << setw(3) << Matrix1[i][j] << "   ";
        }
    }
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

    cout << "\nIntersected Number are :\n";
    PrintIntersectedNumbers(Matrix1, Matrix2, 3, 3);

}
