#include <iostream>
#include "MyLib.h"
using namespace std;

bool IsVowel(char Letter)
{
    Letter = toupper(Letter);

    return (Letter == 'A' || Letter == 'E' || Letter == 'I' || Letter == 'O' || Letter=='U');
}

int main()
{
    char Letter = input::ReadCharacter("Plaese enter a character.");

    if (IsVowel(Letter))
        cout << "YES Letter \'" << Letter << "\' is Vowel\n";
    else
        cout << "NO Letter \'" << Letter << "\' is NOT Vowel\n";

}
