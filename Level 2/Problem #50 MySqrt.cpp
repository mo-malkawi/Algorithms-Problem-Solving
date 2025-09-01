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

float MySqrt(float Number)
{
    return pow(Number, 0.5);      
}

int main()
{
    float Number = ReadNumber("Please enter a number");

    cout << "\nMy Sqrt Result : " << MySqrt(Number) << endl;
    cout << "C++ Sqrt Result : " << sqrt(Number) << endl;

}