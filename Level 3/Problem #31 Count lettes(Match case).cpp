#include <iostream>
#include <cctype>
#include "MyLib.h"
using namespace std;

short CountLetter(string S1, char Letter , bool MatchCase = true)
{
	short counter = 0;

	for (short i = 0; i < S1.length(); i++)
	{
		if (MatchCase)
		{
			if (S1[i] == Letter)
				counter++;
		}
		else
		{
			if (tolower(S1[i]) == tolower(Letter))
				counter++;
		}
	}

	return counter;
}

int main()
{
	string S1 = input::ReadString("Please enter a string.");
	char WantedLetter = input::ReadCharacter("\nPlease enter the character do you want to count.");

	cout << "\nLetter \'" << WantedLetter << "\' count = " << CountLetter(S1 , WantedLetter) << endl;

	cout << "Letter \'" << WantedLetter << "\' or \'" << Chars::InvertLetterCase(WantedLetter)
		<< "\' count = "<< CountLetter(S1, WantedLetter , false) << endl;

}
