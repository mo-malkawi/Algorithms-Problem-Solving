#include <iostream>
#include <string>
#include<cctype>
#include "MyLib.h"
using namespace std;

string ReadString(string Message)
{
	string Input;

	cout << Message << endl;
	getline(cin, Input);

	return Input;
}

string UpperAllString(string S1)
{

	for (int i = 0; i < S1.length(); i++)
	{
		S1[i] = toupper(S1[i]);
	}

	return S1;
}

string LowerAllString(string S1)
{

	for (int i = 0; i < S1.length(); i++)
	{
		S1[i] = tolower(S1[i]);
	}

	return S1;
}

int main()
{

	string S1 = ReadString("Please enter your string.");

	S1 = UpperAllString(S1);
	cout << "\nString after upper:\n";
	cout << S1 << endl;

	S1 = LowerAllString(S1);
	cout << "\nString after lower:\n";
	cout << S1 << endl;
}
