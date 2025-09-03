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

short CountNumberInMatrix(short Matrix[3][3] ,short Rows ,short Cols, short Num)
{
    short Counter = 0;

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (Matrix[i][j] == Num)
                Counter++;
        }
        
    }
    return Counter;
}

int main()
{
    srand((unsigned)time(NULL));

    short Matrix1[3][3] ;

    FillMatrixWithRandomNumbers(Matrix1, 3, 3);

    cout << "Matrix1:\n";
    PrintMatrix(Matrix1, 3, 3);

    short CountedNumber = input::ReadNumber("\nEnter the number to count in matrix. ");
    
    printf("\nNumber %d count in matrix is %d\n", CountedNumber,
        CountNumberInMatrix(Matrix1, 3, 3, CountedNumber));

    

}
