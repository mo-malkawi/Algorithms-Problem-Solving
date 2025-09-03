#include <iostream>
#include<iomanip>
#include "MyLib.h"

using namespace std;

void FillMatrixWithRandomNumbers(int Matrix[3][3])
{
    for (short i = 0; i < 3; i++)
    {
        for (short j = 0; j < 3; j++)
        {
            Matrix[i][j] = random::RandomNumber(1, 100);
        }
    }
}

void PrintMatrix(int Matrix[3][3])
{
    cout << "The following is a 3x3 random matrix:\n";

    for (short i = 0; i < 3; i++)
    {
        for (short j = 0; j < 3; j++)
        {
            cout << setw(3) << Matrix[i][j] << "     ";
        }
        cout << endl;
    }

}

int RowSum(int Matrix[3][3], short RowNumber, short Cols)
{
    int Sum = 0;
    for (short j = 0; j < Cols; j++)
    {
        Sum += Matrix[RowNumber][j];
    }
    return Sum;
}

void PrintEachRowSum(int Matrix[3][3] , short Rows , short Cols)
{
    cout << "\nThe following are the sum of each row in the matrix:\n";
    for (short i = 0; i < Rows;i++)
    {
        printf(" Row %d Sum = %d\n", i + 1, RowSum(Matrix, i, Cols));
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int Matrix[3][3];

    FillMatrixWithRandomNumbers(Matrix);
    PrintMatrix(Matrix);

    PrintEachRowSum(Matrix, 3, 3);

}
