#include <iostream>
#include "MyLib.h"
using namespace std;

bool IsVowel(char Letter)
{
    Letter = toupper(Letter);

    return (Letter == 'A' || Letter == 'E' || Letter == 'I' || Letter == 'O' || Letter == 'U');
}

short CountVowel(string S1)
{
    short counter = 0;

    for (short i = 0; i < S1.length(); i++)
    {
        if (IsVowel(S1[i]))
            counter++;
    }

    return counter;

}

int main()
{
    string S1 = input::ReadString("Please enter a string.");

    cout << "\nNumber of Vowels is : " << CountVowel(S1) << endl;;

}
