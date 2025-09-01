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

void PrintInvertedPattern(short Number)
{
    cout << endl;
    for (int i = Number; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        
        cout << endl;
    }
}

int main()
{
    PrintInvertedPattern(ReadPositiveNumber("Please enter a positive number"));
}
