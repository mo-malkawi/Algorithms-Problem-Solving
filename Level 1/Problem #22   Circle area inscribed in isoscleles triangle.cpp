#include <iostream>
using namespace std;

void ReadDimentions(float &side , float &base)
{
	cout << "Please enter the side and the base of the triangle.\n";
	cin >> side >> base;
}

float CircleAreaByTriangle(float side , float base)
{
	const float pi = 22.0 / 7;
	float area = pi * (pow(base, 2) / 4) * ((2 * side - base) / (2 * side + base));
	return area;
}

void PrintArea(float Area)
{
	cout << "Circle Area is : " << Area << endl;
}

int main()
{
	float side, base;
	ReadDimentions(side , base);
	PrintArea(CircleAreaByTriangle(side,base));
  
}

