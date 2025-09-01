#include <iostream>
using namespace std;

short ReadPositiveNumber(string Message)
{
    short Number = 0;

    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

void PrintInvertedLetterPattern(short Number)
{
    cout << endl;
    for (int i = 65 + Number -1; i >= 65; i--)
    {
        for (int j = 1; j <=Number - (65 + Number - 1 - i); j++)
        {
            cout << (char)i;
        }

        cout << endl;
    }
}

int main()
{
    PrintInvertedLetterPattern(ReadPositiveNumber("Please enter a positive number"));
}
