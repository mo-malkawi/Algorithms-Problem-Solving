#include <iostream>
#include <cmath>
using namespace std;

void EnterDimensions(float &side,float &diagonal)
{
    cout << "Please enter side and diagonal length\n";
    cin >> side >> diagonal;
}

float RectangleAreaBySideAndDiagonal(float side, float diagonal)
{
    float area = side * sqrt(pow(diagonal, 2) - pow(side, 2));

    return area;
}

void PrintResult(float Area)
{
    cout << "Rectangle Area is : " << Area << endl;
}

int main()
{
    float side, diagonal;

    EnterDimensions(side, diagonal);
    PrintResult(RectangleAreaBySideAndDiagonal(side, diagonal));
   
}

