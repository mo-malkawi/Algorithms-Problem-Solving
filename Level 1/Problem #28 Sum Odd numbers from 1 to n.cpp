#include <iostream>
using namespace std;

enum enOddOrEven { Odd = 1, Even = 2 };

enum enWhatToSum { All = 1, fardi = 2, zawji = 3 };

int ReadNumber()
{
    int Num;

    cout << "Please enter a Number.\n";
    cin >> Num;
    return Num;
}

enWhatToSum ReadForGeneric()
{
    int Type;

    cout << "Choose The type of summation of generic function\n";
    cout << "1 for All , 2 for odd , 3 for even" << endl;
    cin >> Type;

    enWhatToSum X = (enWhatToSum)Type;

    return X;

}

enOddOrEven CheckOddOrEven(int Num)
{
    if (Num % 2 == 0)
        return enOddOrEven::Even;
    else
        return enOddOrEven::Odd;
        
}

enWhatToSum MyCheck(int Num)
{
    if (Num % 2 == 0)
        return enWhatToSum::zawji;
    else
        return enWhatToSum::fardi;
}

int SumRange(enWhatToSum T, int N)
{
    int Sum = 0;

    cout << "Sum using Generic Function\n";

    for (int i = 0; i <= N; i++)
    {
        if (T == enWhatToSum::All)
        {
            Sum += i;
        }
        else if (T == enWhatToSum::fardi)
        {
            if (MyCheck(i) == enWhatToSum::fardi)
                Sum += i;
        }
        else if (T == enWhatToSum::zawji)
        {
            if (MyCheck(i) == enWhatToSum::zawji)
                Sum += i;
        }

    }

    return Sum;

}

int SumOddNumbersFrom1toN_usingWhile(int N)
{
    int Sum = 0;
    int counter = 0;

    cout << "Sum odd numbers using while statement\n";

    while (counter <N)
    {
        counter++;

        if (CheckOddOrEven(counter) == enOddOrEven::Odd)
            Sum += counter;

    }

    return Sum;
}

int SumOddNumbersFrom1toN_usingDoWhile(int N)
{
    int Sum = 0;
    int counter = 0;

    cout << "Sum odd numbers using do while statement\n";

    do
    {
        counter++;
        if (CheckOddOrEven(counter) == enOddOrEven::Odd)
            Sum += counter;

    } while (counter < N);

    return Sum;
}

int SumOddNumbersFrom1toN_usingFor(int N)
{
    int Sum = 0;

    cout << "Sum odd numbers using for statement\n";

    for (int counter = 1; counter <= N; counter++)
    {
        if (CheckOddOrEven(counter) == enOddOrEven::Odd)
            Sum += counter;
    }

    return Sum;
}

int main()
{
    int N = ReadNumber();

    cout << SumOddNumbersFrom1toN_usingWhile(N) << endl;
    cout << SumOddNumbersFrom1toN_usingDoWhile(N) << endl;
    cout << SumOddNumbersFrom1toN_usingFor(N) << endl;
    cout << SumRange(ReadForGeneric(), N) << endl;

}
