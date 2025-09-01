#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number = 0;

    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

int SumOfDigits(int Number)
{
    int Remainder = 0;
    int Sum = 0;

    while (Number > 0)
    {
        Remainder = Number % 10;
        Sum += Remainder;
        Number = Number / 10;
    }
    
    return Sum;
}

int main()
{
    cout << "\nSum of digits = " << SumOfDigits(ReadPositiveNumber("Please enter a positive number"));
    cout << endl;
}
