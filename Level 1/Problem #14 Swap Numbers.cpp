#include <iostream>
using namespace std;

void ReadNumbers(int& A, int& B)
{
    cout << "Please enter number A .\n";
    cin >> A;

    cout << "Please enter number B .\n";
    cin >> B;
}

void Swap(int& A, int& B)
{
    int temp ;

    temp = A;
    A = B;
    B = temp;

}

void PrintNumbers(int A, int B)
{
    cout << "Number A = " << A << endl;
    cout << "Number B = " << B << endl;
    cout << endl;
}

int main()
{
    int A, B;
    ReadNumbers(A, B);
    PrintNumbers(A, B);
    Swap(A,B);
    PrintNumbers(A, B);

}
