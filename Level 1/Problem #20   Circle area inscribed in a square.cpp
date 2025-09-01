#include <iostream>
using namespace std;

float ReadSquareSide()
{
    float S;

    cout << "Please enter length.\n";
    cin >> S;
    return S;
}

float CircleAreaInscribedInASquare(float length)
{
    const float pi = 22.0 / 7;
    float Area = ((pow(length, 2)) * pi) / 4;

    return Area;
}

void PrintArea(float Area)
{
    cout << "Circle Area is : " << Area << endl;
}

int main()
{

    PrintArea(CircleAreaInscribedInASquare(ReadSquareSide()));

}
