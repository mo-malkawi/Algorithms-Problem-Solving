#include <iostream>
using namespace std;

enum enNumberType {odd = 1 , Even = 2};

int ReadNumber()
{
    int Num;

    cout << "Please enter a number." << endl;
    cin >> Num;
    return Num;

}

enNumberType CheckNumberType(int Num)
{
    int Result = Num % 2;
    if (Result == 0)
        return enNumberType::Even;
    else
        return enNumberType::odd;
}

void PrintNumberType(enNumberType NumberType)
{
    if (NumberType == enNumberType::Even)
        cout << "Number is even\n";
    else
        cout << "Number is odd\n";
}

int main()
{
    PrintNumberType(CheckNumberType(ReadNumber()));

    return 0;
}

