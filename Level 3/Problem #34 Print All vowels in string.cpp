#include <iostream>
#include "MyLib.h"
using namespace std;

bool IsVowel(char Letter)
{
    Letter = toupper(Letter);

    return (Letter == 'A' || Letter == 'E' || Letter == 'I' || Letter == 'O' || Letter == 'U');
}

void PrintVowels(string S1)
{
    cout << "\nVowels in string are : ";

    for (short i = 0; i < S1.length(); i++)
    {
        if (IsVowel(S1[i]))
            cout << S1[i] << "   ";
    }

    cout << endl;
}

int main()
{
    string S1 = input::ReadString("Please enter a string.");

    PrintVowels(S1);
    

}
