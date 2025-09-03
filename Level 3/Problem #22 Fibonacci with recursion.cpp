#include <iostream>
#include <vector>
#include "MyLib.h"
using namespace std;


void PrintFibonacciWithRecursion(short Number , int Prev1 , int Prev2)
{

    int FibNumber = 0;

	if (Number > 0)
	{
		FibNumber = Prev2 + Prev1;
		Prev2 = Prev1;
		Prev1 = FibNumber;
		cout << FibNumber << "   ";
		PrintFibonacciWithRecursion(Number - 1 , Prev1 , Prev2);
	}
}


int main()
{
	PrintFibonacciWithRecursion(10,0,1);
}