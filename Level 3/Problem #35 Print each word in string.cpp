#include <iostream>
#include <string>
#include "MyLib.h"
using namespace std;

//void PrintEachWord(string S1)
//{
//    bool isLetter = true;
//    cout << endl;
//
//    for (short i = 0; i < S1.length(); i++)
//    {
//        isLetter = (S1[i] == ' ') ? isLetter = false : isLetter = true;
//
//        if (isLetter)
//            cout << S1[i];
//        else
//            cout << endl;   
//    }
//}

void PrintEachWord(string S1)
{
    string delim = " ";

    cout << "\nYour string words are : \n";
    short pos = 0;
    string sWord;

    while ((pos = S1.find(delim)) != string::npos)
    {
        sWord = S1.substr(0 , pos);
        if (sWord != "")
        {
            cout << sWord << endl;
        }

        S1.erase(0, pos + delim.length());
    }

    if (S1 != "")
    {
        cout << S1 << endl;
    }
}

int main()
{

    PrintEachWord(input::ReadString("Please enter a string."));
    
}

