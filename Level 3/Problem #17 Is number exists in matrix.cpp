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
            Matrix[i][j] = random::RandomNumber(0, 100);
        }
    }
}

void PrintMatrix(short Matrix[3][3], short Rows, short Cols)
{

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            cout << setw(3) << Matrix[i][j] << "   ";
        }
        cout << endl;
    }

}

short IsNumberInMatrix(short Matrix[3][3], short Rows, short Cols, short Num)
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

int main()
{
    srand((unsigned)time(NULL));

    short Matrix1[3][3];

    FillMatrixWithRandomNumbers(Matrix1, 3, 3);

    cout << "Matrix1:\n";
    PrintMatrix(Matrix1, 3, 3);

    short WantedNumber = input::ReadNumber("\nPlease enter the number to look for in matrix.  ");

    if (IsNumberInMatrix(Matrix1, 3, 3 , WantedNumber))
        cout << "\nYes it is here\n";
    else
        cout << "\nNO it is NOT here\n";


}
