#include <iostream>
#include <cctype>
#include "MyLib.h"
using namespace std;

short CountLetter(string S1, char Letter)
{
	short counter = 0;

	for (short i = 0; i < S1.length(); i++)
	{
		if (S1[i] == Letter)
			counter++;
	}
	return counter;
}

int main()
{
	string S1 = input::ReadString("Please enter a string.");
	char WantedLetter = input::ReadCharacter("\nPlease enter the character do you want to count.");

	printf("\nLetter '%*c' count = %d",1, WantedLetter, CountLetter(S1, WantedLetter));

}
