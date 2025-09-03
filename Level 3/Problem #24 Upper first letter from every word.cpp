#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string ReadString(string Message)
{
	string Input;

	cout << Message << endl;
	getline(cin, Input);

	return Input;
}

string UpperFirstLetterOfEachWord(string S1)
{
	bool isFirstLetter = true;

	for (int i = 0; i < S1.length(); i++)
	{

		if (S1[i] != ' ' && isFirstLetter )
		{
			S1[i] = toupper(S1[i]);
		}

		isFirstLetter = (S1[i] == ' ' ? true : false);

	}
	return S1;

}

string LowerFirstLetterOfEachWord(string S1)
{
	bool isFirstLetter = true;

	for (int i = 0; i < S1.length(); i++)
	{

		if (S1[i] != ' ' && isFirstLetter)
		{
			S1[i] = tolower(S1[i]);
		}

		isFirstLetter = (S1[i] == ' ' ? true : false);

	}
	return S1;

}

int main()
{

	string S1 = ReadString("Please enter your string.");

	S1 = UpperFirstLetterOfEachWord(S1);
	cout << "\nString after conversion to upper:\n";
	cout << S1 << endl;

	S1 = LowerFirstLetterOfEachWord(S1);
	cout << "\nString after conversion to lower:\n";
	cout << S1 << endl;

}
