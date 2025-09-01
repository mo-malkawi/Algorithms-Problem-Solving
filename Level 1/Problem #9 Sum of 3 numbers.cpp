#include <iostream>
using namespace std;

// call by val & call by ref ãÔ ÈÇáØÑíŞÉ ÇáãËáì ÚÔÇä íĞßÑäÇ ÈÇá  

void ReadNumbers(int& Num1, int& Num2, int& Num3)
{
    cout << "Please enter number 1.\n";
    cin >> Num1;

    cout << "Please enter number 2.\n";
    cin >> Num2;

    cout << "Please enter number 3.\n";
    cin >> Num3;
}

int SumOfNumbers(int Num1, int Num2, int Num3)
{
    return Num1 + Num2 + Num3;
}

void PrintResults(int Total)
{
    cout << "The total sum of numbers is : " << Total << endl;
}

int main()
{
    int Num1, Num2, Num3;
    ReadNumbers(Num1, Num2, Num3);
    PrintResults(SumOfNumbers(Num1 , Num2 , Num3));
    
}

