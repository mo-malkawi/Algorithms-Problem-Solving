#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number;

    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number < 0);

    return Number;
   
}

int FactorialOf(int N)
{
    int Factorial = 1 ;

    for (int Counter = N; Counter >= 1; Counter--)
    {
        Factorial = Factorial * Counter;
    }

    return Factorial;
}


int main()
{
   
    cout << FactorialOf(ReadPositiveNumber("Enter a positive number.")) << endl;

}
