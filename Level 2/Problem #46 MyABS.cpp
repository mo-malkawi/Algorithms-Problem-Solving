#include <iostream>
#include<cmath>
using namespace std;

float ReadNumber(string Message)
{
    int number = 0;

    cout << Message << endl;
    cin >> number;

    return number;
}

float MyABS(float Number)
{
    if (Number >= 0)
        return Number;
    else
        return Number * -1;
}

int main()
{
    float Number = ReadNumber("Please enter a number");

    cout << "\nMy abs Result : " << MyABS(Number) << endl;
    cout << "C++ abs Result : " << abs(Number) << endl;

}