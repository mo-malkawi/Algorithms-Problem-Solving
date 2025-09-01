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

float CalculatTotalBill(float Bill)
{
    float BillAfterService = Bill * 1.1;
    float BillAfterTax = BillAfterService * 1.16;

    return BillAfterTax;
}

int main()
{
    float Bill = ReadPositiveNumber("Please enter Bill Value.");

    cout << endl;
    cout << "Total Bill = " << Bill << endl;
    cout << "Total Bill after service fee and sales tax = " << CalculatTotalBill(Bill) << endl;
    
}
