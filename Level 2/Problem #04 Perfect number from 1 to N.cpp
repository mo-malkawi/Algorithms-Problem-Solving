#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
    int number = 0;

    do
    {
        cout << Message << endl;
        cin >> number;
    } while (number <= 0);

    return number;
}

bool CheckPerfect(int Number)
{
    int Sum = 0;
    for (int i = 1;i < Number;i++)
    {
        if (Number % i == 0)
            Sum += i;
    }

    return Number == Sum;
}

void PrintPerfectNumbersFrom1ToN(int Number)
{
    for (int i = 1; i <= Number; i++)
    {
        if (CheckPerfect(i))
            cout << endl << i ;
    }
}

int main()
{
    PrintPerfectNumbersFrom1ToN(ReadPositiveNumber("Please enter a positive number."));
}
