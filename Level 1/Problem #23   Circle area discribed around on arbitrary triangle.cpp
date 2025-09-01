#include <iostream>
#include <cmath>
using namespace std;

void ReadDimentions(float &A , float &B , float &C)
{
	cout << "Please enter triangle's sides lengths.\n";
	cin >> A >> B >> C;

}

float CircleAreaByTriangle(float A , float B , float C)
{
	const float pi = 22.0 / 7;
	float p ;
	p = (A + B + C) / 2;
	float T;
	T = (A * B * C) / (4 * sqrt(p * (p - A) * (p - B) * (p - C)));

	float area = pi * pow(T,2);

	return area;
}

void PrintArea(float Area)
{
	cout << "Circle Area is : " << Area << endl;
}

int main()
{
	float A, B, C;
	ReadDimentions(A, B, C);
	PrintArea(CircleAreaByTriangle(A, B, C));
}
