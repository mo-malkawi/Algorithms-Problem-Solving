#include <iostream>
using namespace std;

float ReadDiameter()
{
    float D;

    cout << "Please enter daimeter\n";
    cin >> D;
    return D;
}

float CircleAreaByDiameter(float diameter)
{
    const float pi = 22.0 / 7;
    float Area = (pi * pow(diameter, 2)) / 4;
    return Area;
}

void PrintArea(float Area)
{
    cout << "Circle Area is : " << Area << endl;
}

int main()
{
    PrintArea(CircleAreaByDiameter(ReadDiameter()));
   
}
