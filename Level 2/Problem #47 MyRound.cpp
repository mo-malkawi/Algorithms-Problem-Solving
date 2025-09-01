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

float MyRound(float Number)
{
    int IntPart;
    IntPart = (int)Number;

    float FractionsPart = GetFractionPart(Number);

    if (abs(FractionsPart) >= 0.5)
    {
        if (Number > 0)
            return ++IntPart;
        else
            return --IntPart;
    }
    else
        return IntPart;


}


int main()
{
    float Number = ReadNumber("Please enter a number");
    
    cout << "\nMy Round Result : " << MyRound(Number) << endl;
    cout << "C++ Round Result : " << round(Number) << endl;

}