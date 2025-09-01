#include <iostream>
using namespace std;

void ReadNumbers(int& Num1, int& Num2)
{
	cout << "Enter first number.\n";
	cin >> Num1;

	cout << "Enter second number.\n";
	cin >> Num2;
}

int MaxOf2Numbers(int Num1, int Num2)
{
	if (Num1 > Num2)
		return Num1;
	else
		return Num2;
}

void PrintResults(int Max)
{
	cout << "The Maximum number is : " << Max << endl;
}

int main()
{
	int Num1, Num2;
	ReadNumbers(Num1, Num2);
	PrintResults(MaxOf2Numbers(Num1, Num2));

}

