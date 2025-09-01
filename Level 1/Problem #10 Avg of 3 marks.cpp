#include <iostream>
using namespace std;

// call by val & call by ref ãÔ ÈÇáØÑíŞÉ ÇáãËáì ÚÔÇä íĞßÑäÇ ÈÇá  

void ReadMarks(int& Mark1 , int& Mark2, int& Mark3)
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
    return (float)SumOfMarks(Mark1, Mark2, Mark3)/3;
}

void PrintResults(float Average)
{
    cout << "The average is : " << Average << endl;
}

int main()
{
    int Num1, Num2, Num3;
    ReadMarks(Num1, Num2, Num3);
    PrintResults(CalculateAverage(Num1, Num2, Num3));

}

