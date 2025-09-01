#include <iostream>
using namespace std;
float ReadRadius()
{
    float Radius;

    cout << "Please enter radius .\n";
    cin >> Radius;
    return Radius;
}

float AreaCalculation(float r)
{
    const float pi = 22.0f / 7;
    float area = pi * pow(r, 2);
    return area;
}

void PrintArea(float Area)
{
    cout << "Cicrle area is : " << Area << endl;
}

int main()
{
    
    PrintArea(AreaCalculation(ReadRadius()));

}

