#include <iostream>
using namespace std;

float ReadCircumference()
{
	float C;

	cout << "Please enter circle circumference.\n";
	cin >> C;
	return C;
}

float CircleAreaByCircumference(float c)
{
	const float pi = 22.0 / 7;
	float Area = pow(c, 2) / (4 * pi);
	return Area;
}

void PrintArea(float Area)
{
	cout << "Circle Area is : " << Area << endl;
}


int main()
{

	PrintArea(CircleAreaByCircumference(ReadCircumference()));

}
