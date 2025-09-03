#include <iostream>
#include <string>
#include "MyLib.h"
using namespace std;

vector <string> SplitString(string S1 , string delim)
{
    vector <string> Splitted;

    short pos = 0;
    string sWord;

    while ((pos = S1.find(delim)) != string::npos)
    {
        sWord = S1.substr(0, pos);
        if (sWord != "")
        {
            Splitted.push_back(sWord);
        }

        S1.erase(0, pos + delim.length());
    }

    if (S1 != "")
    {
        Splitted.push_back(S1);
    }

    return Splitted;
}

int main()
{

    vector <string> vString;

    vString = SplitString(input::ReadString("Please enter a string."), " ");

    cout << "\nTokens = " << vString.size() << endl;

    for (string &s : vString)
    {
        cout << s << endl;
    }

}

