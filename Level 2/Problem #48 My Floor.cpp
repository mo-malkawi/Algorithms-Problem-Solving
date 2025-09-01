#include <iostream>
#include<cmath>
using namespace std;

float ReadNumber(string Message)
{
    float number = 0;

    cout << Message << endl;
    cin >> number;

    return number;
}

float GetFractionPart(float Number)
{
    return Number - (int)Number;
}

float MyFloor(float Number)
{
    if (abs(GetFractionPart(Number)) > 0)
    {
        if (Number > 0)
            return (int)Number;
        else
            return (int)Number - 1;
    }
    else
        return Number;
}


int main()
{
    float Number = ReadNumber("Please enter a number");

    cout << "\nMy Floor Result : " << MyFloor(Number) << endl;
    cout << "C++ Floor Result : " << floor(Number) << endl;
}