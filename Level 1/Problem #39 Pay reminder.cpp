#include <iostream>
using namespace std;

float ReadPositiveNumber(string Message)
{
    float number = 0;

    do
    {
        cout << Message << endl;
        cin >> number;
    } while (number <= 0);

    return number;
}

float CalculateRemainder(float TotalBill , float CashPaid)
{
    return CashPaid - TotalBill;
}

int main()
{
    float TotalBill = ReadPositiveNumber("Please enter Total Bill.");
    float CashPaid = ReadPositiveNumber("Please enter cash paid.");
   
    cout << endl;
    cout << "Total Bill = " << TotalBill << endl;
    cout << "Cash Paid = " << CashPaid << endl;

    cout << "*********************\n";
    cout << "Remainder = " << CalculateRemainder(TotalBill, CashPaid);

    return 0;
}

