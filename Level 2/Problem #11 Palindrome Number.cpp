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

int ReverseNumber(int Number)
{
    int Remainder = 0;
    int ReversedNumber = 0;

    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        ReversedNumber = ReversedNumber * 10 + Remainder;
    }
    return ReversedNumber;
}

bool CheckPalindrome(int Number)
{
    return Number == ReverseNumber(Number);
}

int main()
{
    if (CheckPalindrome(ReadPositiveNumber("Please enter a positive number")))
        cout << "Yes , it is a palindrome number\n";
    else
        cout << "No , it is not a Palindrome number\n";
}