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

int CountDigitFrequency(short DigitToCheck, int Number)
{
    int Remainder = 0;
    int FreqCount = 0;

    while (Number > 0)
    {
        Remainder = Number % 10;
        Number /= 10;

        if (DigitToCheck == Remainder)
            FreqCount++;
    }

    return FreqCount;
}

void PrintAllDigitsFrequency(int Number)
{
    cout << endl;

    for (int i = 0; i <= 9; i++)
    {
        short DigitFrequency = 0;
        DigitFrequency = CountDigitFrequency(i, Number);

        if (DigitFrequency > 0)
            cout << "Digit " << i << " Frequency is " << DigitFrequency << " Times(s).\n";
    }
    
}

int main()
{
    PrintAllDigitsFrequency(ReadPositiveNumber("Please enter a positive number")) ;
}