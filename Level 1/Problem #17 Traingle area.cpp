#include <iostream>
using namespace std;

struct stDimentions 
{
	float base;
	float height;
};

stDimentions ReadDimentions()
{
	stDimentions Dimentions;

	cout << "Please enter base length and height.\n";
	cin >> Dimentions.base >> Dimentions.height;

	return Dimentions;
}

float TriangleArea(stDimentions D)
{
	float Area = D.base / 2 * D.height;
	return Area;
}

void PrintArea(float Area)
{
	cout << "Triangle Area is : " << Area << endl;
}

int main()
{
	PrintArea(TriangleArea(ReadDimentions()));
 }
