#include <iostream>
#include <string>
#include "MyLib.h"
using namespace std;

string ReverseWordsInString(string S1)
{
    vector <string> vString;
    vString = Strings::SplitString(S1, " ");
    string S2 = "";

    vector <string>::iterator iter = vString.end();

    while (iter != vString.begin())
    {
        iter--;

        S2 += *iter + " ";
    }

    S2.pop_back();

    return S2;

}

int main()
{
    string S1 = input::ReadString("Please enter a string.");

   cout << "\nString after reversing words:\n";
   cout << ReverseWordsInString(S1) << endl;

}
