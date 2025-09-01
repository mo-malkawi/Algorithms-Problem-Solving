#include <iostream>

using namespace std;

void EnterDimensions(float &length,float &width)
{
    cout << "Please enter length and width\n";
    cin >> length >> width;
}

float AreaCalculation(float length, float width)
{
    return length * width;
}

void PrintResult(float Area)
{
    cout << "Rectangle Area = " << Area << endl;
}

int main()
{
    float length, width;
    EnterDimensions(length, width);
    PrintResult(AreaCalculation(length, width));
}
