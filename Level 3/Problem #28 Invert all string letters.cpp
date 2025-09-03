#include <iostream>
#include <cctype>
#include "MyLib.h"
using namespace std;

char InvertLetterCase(char C1)
{
    return isupper(C1) ? tolower(C1) : toupper(C1);
}

string InvertAllStringLettersCase(string S1)
{
    for (short i = 0; i < S1.length(); i++)
    {
       S1[i] = InvertLetterCase(S1[i]);
    }

    return S1;

}

int main()
{
    string S1 = input::ReadString("Please enter your string.");

    S1 = InvertAllStringLettersCase(S1);
    cout << "\nString after inverting all letter cases:\n";
    cout << S1 << endl;

}

