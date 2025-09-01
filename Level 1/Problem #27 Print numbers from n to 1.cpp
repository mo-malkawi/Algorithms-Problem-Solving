#include <iostream>
using namespace std;

int ReadNumber()
{
    int N;

    cout << "Please enter a number.\n";
    cin >> N;

    return N;
}

void PrintRangefromNto1_UsingWhile(int Num)
{
    int x = Num+1;

    cout << "Range printed using while statement\n";

    while (x  > 1)
    {
        x--;
        cout << x << endl;
    }
}

void PrintRangefromNto1_UsingDoWhile(int N)
{
    int counter = N+1;

    do
    {
        cout << --counter << endl;
    } while (counter > 1);
}

void PrintRangefromNto1_UsingFor(int N)
{

    for (int i = N; i >= 1; i--)
    {
        cout << i << endl;
    }

}

int main()
{
    int Num = ReadNumber();

    PrintRangefromNto1_UsingWhile(Num);
    PrintRangefromNto1_UsingDoWhile(Num);
    PrintRangefromNto1_UsingFor(Num);

}
