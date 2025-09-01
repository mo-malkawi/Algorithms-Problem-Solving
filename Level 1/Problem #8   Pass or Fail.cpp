#include <iostream>
using namespace std;

enum enPassFail {Pass = 1 , Fail = 2};

int ReadMark()
{

    int Mark;

    cout << "Please enter your Mark.\n";
    cin >> Mark;
    return Mark;

}

enPassFail CheckMark(int Mark)
{
    if (Mark >= 50)
    {
        return enPassFail::Pass;
    }
    else
    {
        return enPassFail::Fail;

    }
}

void PrintResults(int Mark)
{
    if (CheckMark(Mark) == enPassFail::Pass)
        cout << "You Passed!\n";
    else
        cout << "You Failed!\n";
}

int main()
{
    
    PrintResults(ReadMark());
 
   
}
