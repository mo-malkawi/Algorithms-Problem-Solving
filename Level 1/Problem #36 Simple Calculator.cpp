#include <iostream>

using namespace std;

enum enOporationType
{
	Add = '+', Subtract = '-',
	Multiply = '*', Divide = '/'
};

float ReadNumber(string Messege)
{
	float Number = 0;

	cout << Messege << endl;
	cin >> Number;

	return Number;
}

enOporationType ReadOpType()
{
	char OT = '+';

	cout << "Please enter Operation Type ( +, - , * , / )\n";
	cin >> OT;

	return (enOporationType)OT;
}

float Calculate(float Num1, float Num2, enOporationType OpType)
{
	switch (OpType)
	{
	case enOporationType::Add:
		return Num1 + Num2;
	case enOporationType::Subtract:
		return Num1 - Num2;
	case enOporationType::Multiply:
		return Num1 * Num2;
	case enOporationType::Divide:
		return Num1 / Num2;
	}
}



int main()
{
	
	float Number1 = ReadNumber("Please enter the first number.");
	float Number2 = ReadNumber("Please enter the second number.");

	enOporationType OpType = ReadOpType();

	cout << endl << "Result = " << Calculate(Number1, Number2, OpType);

}
