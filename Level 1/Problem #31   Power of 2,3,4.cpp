#include <iostream>
#include <cmath>
using namespace std;

int ReadNumber()
{
    int N;

    cout << "Please enter a number.\n";
    cin >> N;

    return N;
}

void PowerOf2_3_4(int Number)
{

    int a, b, c;

    a = Number * Number;
    b = Number * Number * Number;
    c = Number * Number * Number * Number;
    cout << a << " " << b << " " << c << endl;

}


int main()
{

    PowerOf2_3_4(ReadNumber());

}
