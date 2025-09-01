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

int Frequency(short DigitToCheck, int Number)
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

int main()
{
    int Number = ReadPositiveNumber("Please enter a positive number");
    short DigitToCheck = ReadPositiveNumber("Please enter one digit to check.");

    cout << "\nDigit " << DigitToCheck << " Frequency is : "
        << Frequency(DigitToCheck, Number) << " Times(s)." << endl;
}

