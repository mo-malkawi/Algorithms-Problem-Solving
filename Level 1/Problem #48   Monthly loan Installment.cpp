#include <iostream>
using namespace std;

float ReadPositiveNumber(string message)
{
    float number = 0;

    do
    {
        cout << message << endl;
        cin >> number;

    } while (number <= 0);

    return number;

}

float MonthlyInstallment(float LoanAmount , float Monhts)
{
    return (float)LoanAmount / Monhts;
}

int main()
{
    float LoanAmount = ReadPositiveNumber("Please enter Loan Amount");
    short Months = ReadPositiveNumber("How many months");
    
    cout << "\nMonthlyInstallment : " << MonthlyInstallment(LoanAmount, Months) << endl;

    return 0;
}

