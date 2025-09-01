#include <iostream>
using namespace std;

int ReadNumber()
{
    int N;

    cout << "Please enter a number.\n";
    cin >> N;

    return N;
}

void PrintRangefrom1toN_UsingWhile(int Num)
{
    int x = 0;

    cout << "Range printed using while statement\n";

    while (x < Num)
    {
        x++;
        cout << x << endl;
    }
}

void PrintRangefrom1toN_UsingDoWhile(int N)
{
    int counter = 0;

    do
    {
        cout << ++counter << endl;
    } while (counter < N);
}

void PrintRangefrom1toN_UsingFor(int N)
{

    for (int i = 0; i < N; i++)
    {
        cout << i + 1 << endl;
    }

}

int main()
{
    int Num = ReadNumber();

    PrintRangefrom1toN_UsingWhile(Num);
    PrintRangefrom1toN_UsingDoWhile(Num);
    PrintRangefrom1toN_UsingFor(Num);

}
