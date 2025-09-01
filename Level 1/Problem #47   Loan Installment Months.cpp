#include <iostream>
using namespace std;

float ReadPositiveNumber(string message)
{

    float Number = 0;

    do
    {
        cout << message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

float TotalMonths(float LoanAmount , float MonthlyInstallment)
{
    return (float)LoanAmount / MonthlyInstallment;
}

int main()
{
    float LoanAmount = ReadPositiveNumber("Please enter Loan amount.");
    float MonthlyInstallment = ReadPositiveNumber("Please enter Monthly installment");

    cout << "\nTotal months to pay : " << TotalMonths(LoanAmount, MonthlyInstallment);
    cout << endl;

    return 0;
}
