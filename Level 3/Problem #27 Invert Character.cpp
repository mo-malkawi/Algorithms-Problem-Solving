#include <iostream>
#include <cctype>
#include "MyLib.h"
using namespace std;

char ReadCharacter(string message)
{
    char c;

    cout << message << endl;
    cin >> c;

    return c;
}

char InvertCharacter(char C1)
{
    return isupper(C1) ? tolower(C1) : toupper(C1);
}

int main()
{
    
    char C1 = ReadCharacter("Please enter a character.");

    C1 = InvertCharacter(C1);

    cout << "\nCharacter after invert:\n";
    cout << C1 << endl;

}

