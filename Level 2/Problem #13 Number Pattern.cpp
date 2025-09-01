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

void PrintNumberPattern(int Number)
{
    cout << endl;

    for (int i = 1; i <= Number; i++)
    {
        for (int j = i; j > 0; j--)
        {
            cout << i;
        }
        cout << endl;
    }

}

int main()
{
    PrintNumberPattern(ReadPositiveNumber("Please enter a positive number"));
}
