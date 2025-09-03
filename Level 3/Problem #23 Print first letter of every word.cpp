#include <iostream>
#include <string>
#include "MyLib.h"
using namespace std;

string ReadString(string Message)
{
	string Input;

	cout << Message << endl;
	getline(cin, Input);

	return Input;
}

void PrintEveryFirstLetter(string Input)
{
	bool isFirstLetter = true;

	cout << "\nFirst Letters of this string:\n";
	
	for (int i = 0; i < Input.length(); i++)
	{
		
		if (Input[i] != ' ' && isFirstLetter)
		{
			cout << Input[i] << endl;
		}

		isFirstLetter = (Input[i] == ' ' ? true : false);

	}
}

int main()
{
	PrintEveryFirstLetter(ReadString("Please enter your string."));
}
