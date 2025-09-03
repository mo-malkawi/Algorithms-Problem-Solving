#include <iostream>
#include <string>
#include <vector>
#include "MyLib.h"
using namespace std;

string ReplaceWordInStringUsingSplit(string S1, string StringToReplace, string NewWord ,bool MatchCase = true)
{
    vector <string> vString = Strings::SplitString(S1, " ");

    for (string& s : vString)
    {
        if (MatchCase)
        {
            if (s == StringToReplace)
            {
                s = NewWord;
            }
        }
        else
        {
            if (Strings::LowerAllString(s) == Strings::LowerAllString(StringToReplace))
            {
                s = NewWord;
            }
        }
    }

    return Strings::JoinString(vString, " ");
}

int main()
{
    string S1 = "Welcome to Jordan , Jordan is a nice country";
    string StringToReplace = "jordan";
    string ReplaceTo = "USA";

    cout << "Original String:\n" << S1;;

    S1 = ReplaceWordInStringUsingSplit(S1, StringToReplace, ReplaceTo);
    cout << "\n\nReplace With Match Case:\n" << S1 << endl;

    S1 = ReplaceWordInStringUsingSplit(S1, StringToReplace, ReplaceTo , false);
    cout << "\nReplace Without Match Case:\n" << S1 << endl;

}
