#include <iostream>
#include <string>
#include "MyLib.h"
using namespace std;

short CountWords(string S1)
{
    string delim = " ";

    short pos = 0;
    string sWord;
    short counter = 0;

    while ((pos = S1.find(delim)) != string::npos)
    {
        sWord = S1.substr(0, pos);
        if (sWord != "")
        {
            counter++;
        }

        S1.erase(0, pos + delim.length());
    }

    if (S1 != "")
    {
        counter++;
    }
    return counter++;
}

int main()
{

    string S1 = input::ReadString("Please enter a string.");

    cout << "\nNumber of words in your string = ";
    cout << CountWords(S1) << endl;

}

