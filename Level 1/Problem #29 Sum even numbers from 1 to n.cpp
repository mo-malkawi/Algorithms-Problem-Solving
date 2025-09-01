#include <iostream>
using namespace std;

enum enOddOrEven { Odd = 1, Even = 2 };

int ReadNumber()
{
    int Num;

    cout << "Please enter a Number.\n";
    cin >> Num;
    return Num;
}

enOddOrEven CheckOddOrEven(int Num)
{
    if (Num % 2 == 0)
        return enOddOrEven::Even;
    else
        return enOddOrEven::Odd;

}

int SumEvenNumbersFrom1toN_usingWhile(int N)
{
    int Sum = 0;
    int counter = 0;

    cout << "Sum even numbers using while statement\n";

    while (counter < N)
    {
        counter++;

        if (CheckOddOrEven(counter) == enOddOrEven::Even)
            Sum += counter;

    }

    return Sum;
}

int SumEvenNumbersFrom1toN_usingDoWhile(int N)
{
    int Sum = 0;
    int counter = 0;

    cout << "Sum even numbers using do while statement\n";

    do
    {
        counter++;
        if (CheckOddOrEven(counter) == enOddOrEven::Even)
            Sum += counter;

    } while (counter < N);

    return Sum;
}

int SumEvenNumbersFrom1toN_usingFor(int N)
{
    int Sum = 0;

    cout << "Sum even numbers using for statement\n";

    for (int counter = 1; counter <= N; counter++)
    {
        if (CheckOddOrEven(counter) == enOddOrEven::Even)
            Sum += counter;
    }

    return Sum;
}

int main()
{
    int N = ReadNumber();

    cout << SumEvenNumbersFrom1toN_usingWhile(N) << endl;
    cout << SumEvenNumbersFrom1toN_usingDoWhile(N) << endl;
    cout << SumEvenNumbersFrom1toN_usingFor(N) << endl;

}
