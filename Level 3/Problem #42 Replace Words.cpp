#include <iostream>
#include <string>
using namespace std;
string ReplaceWordInStringUsingBuiltInFunction(string S1, string StringToReplace, string NewWord)
{
    short Pos = S1.find(StringToReplace);

    while (Pos != string::npos)
    {
        S1 = S1.replace(Pos, StringToReplace.length(), NewWord);
        Pos = S1.find(StringToReplace);
    }

    return S1;
}

int main()
{
    string S1 = "Welcome to Jordan , Jordan is a nice country";
    string StringToReplace = "Jordan";
    string ReplaceTo = "USA";

    cout << "Original String:\n" << S1;
    cout << "\n\nString After replace:\n";
    cout << ReplaceWordInStringUsingBuiltInFunction(S1, StringToReplace, ReplaceTo) << endl;
   
}
