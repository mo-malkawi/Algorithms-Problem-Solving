#include <iostream>
using namespace std;

// call by val & call by ref ãÔ ÈÇáØÑíŞÉ ÇáãËáì ÚÔÇä íĞßÑäÇ ÈÇá  

enum enPassFail {Pass= 1 , Fail = 2};

void ReadMarks(int& Mark1, int& Mark2, int& Mark3)
{
    cout << "Please enter Mark 1.\n";
    cin >> Mark1;

    cout << "Please enter Mark 2.\n";
    cin >> Mark2;

    cout << "Please enter Mark 3.\n";
    cin >> Mark3;
}

int SumOfMarks(int Mark1, int Mark2, int Mark3)
{
    return Mark1 + Mark2 + Mark3;
}

float CalculateAverage(int Mark1, int Mark2, int Mark3)
{
    return (float)SumOfMarks(Mark1, Mark2, Mark3) / 3;
}

enPassFail CheckAverage(float Average)
{
    if (Average >= 50)
        return enPassFail::Pass;
    else
        return enPassFail::Fail;
}

void PrintResults(float Average)
{
    cout << "The average is : " << Average << endl;

    if (CheckAverage(Average) == enPassFail::Pass)
        cout << "You Passed!\n";
    else 
        cout << "You Failed!\n";

}

int main()
{
    int Num1, Num2, Num3;
    ReadMarks(Num1, Num2, Num3);
    PrintResults(CalculateAverage(Num1, Num2, Num3));

}

