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

void PrintResult(int Number)
{
    if (CheckPerfect(Number))
        cout << endl << Number << " is perfect\n";
    else
        cout << endl << Number << " is not perfect\n";

}

int main()
{
    PrintResult(ReadPositiveNumber("Please enter a perfect number."));
}
