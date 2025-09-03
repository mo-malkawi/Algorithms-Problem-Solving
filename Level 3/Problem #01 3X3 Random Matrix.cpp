#include <iostream>
#include<iomanip>
#include "MyLib.h"

using namespace std;

void FillMatrixWithRandomNumbers(int Matrix[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            Matrix[i][j] = random::RandomNumber(1, 100);
        }
    }
}

void PrintMatrix(int Matrix[3][3])
{
    cout << "The following is a 3x3 random matrix:\n";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << setw(3) << Matrix[i][j] << "     ";
        }
        cout << endl;
    }

}

int main()
{
    srand((unsigned)time(NULL));

    int Matrix[3][3];

    FillMatrixWithRandomNumbers(Matrix);
    PrintMatrix(Matrix);
    
}
