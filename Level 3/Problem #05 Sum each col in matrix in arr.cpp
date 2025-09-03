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

int SumColumn(int Matrix[3][3], short Rows, short ColumnNumber)
{
    short Sum = 0;

    for (int i = 0; i < Rows; i++)
    {
        Sum += Matrix[i][ColumnNumber];
    }
    return Sum;
}


void FillArrayWithSum(int Matrix[3][3], short arr[3], short Rows, short Cols)
{
    for (int i = 0; i < Cols; i++)
    {
        arr[i] = SumColumn(Matrix, Rows, i);
    }
}

void PrintEachColumnSum(short arr[3], short Cols)
{
    cout << "\nThe following are the sum of each column in the matrix:\n";
    for (short i = 0; i < Cols; i++)
    {
        printf(" Column %d Sum = %d\n", i + 1, arr[i]);
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int Matrix[3][3];
    short arr[3];

    FillMatrixWithRandomNumbers(Matrix);
    PrintMatrix(Matrix);

    FillArrayWithSum(Matrix, arr, 3, 3);
    PrintEachColumnSum(arr, 3);

}
