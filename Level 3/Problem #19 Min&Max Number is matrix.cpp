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
            Matrix[i][j] = random::RandomNumber(0, 9);
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

short GetMinNumberInMatrix(short Matrix[3][3] , short Rows , short Cols)
{
    short MinimumNumber = Matrix[0][0];

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (Matrix[i][j] < MinimumNumber)
                MinimumNumber = Matrix[i][j];
        } 
    }
    return MinimumNumber;
}

short GetMaxNumberInMatrix(short Matrix[3][3], short Rows, short Cols)
{
    short MaxNumber = Matrix[0][0];

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (Matrix[i][j] > MaxNumber)
                MaxNumber = Matrix[i][j];
        }
    }
    return MaxNumber;
}

int main()
{
    srand((unsigned)time(NULL));

    short Matrix1[3][3];

    FillMatrixWithRandomNumbers(Matrix1, 3, 3);

    cout << "Matrix1:\n";
    PrintMatrix(Matrix1, 3, 3);

    cout << "\nMinimum number is : " << GetMinNumberInMatrix(Matrix1, 3, 3) << endl;

    cout << "\nMax number is : " << GetMaxNumberInMatrix(Matrix1, 3, 3) << endl;


}
