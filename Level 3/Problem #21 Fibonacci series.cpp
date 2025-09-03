#include <iostream>
#include <vector>
#include "MyLib.h"
using namespace std;

void PrintFibonacciUsingLoop(short Number)
{
	int FebNumber = 0;
	int Prev2 = 0, Prev1 = 1;

	cout << "1   ";

	for (int i = 2; i <= Number; i++)
	{
		FebNumber = Prev2 + Prev1;
		cout << FebNumber << "   ";
		Prev2 = Prev1;
		Prev1 = FebNumber;
	}

}

int main()
{
	PrintFibonacciUsingLoop(10);
}