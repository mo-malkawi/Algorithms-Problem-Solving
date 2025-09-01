#include <iostream>
using namespace std;

struct stPiggyBankContent
{
    int pennies, nickles, dimes, quarters, dollars;
};

stPiggyBankContent ReadPiggyBankContent()
{
    stPiggyBankContent PiggyBankContent;

    cout << "Please enter Total Pennies.\n";
    cin >> PiggyBankContent.pennies;

    cout << "Please enter Total nickles.\n";
    cin >> PiggyBankContent.nickles;

    cout << "Please enter Total dimes.\n";
    cin >> PiggyBankContent.dimes;

    cout << "Please enter Total quarters.\n";
    cin >> PiggyBankContent.quarters;

    cout << "Please enter Total dollars.\n";
    cin >> PiggyBankContent.dollars;

    return PiggyBankContent;
}

int CalculateTotalPennies(stPiggyBankContent PiggyBankConten)
{
    int TotalPennies = 0;

    TotalPennies = PiggyBankConten.pennies + PiggyBankConten.nickles * 5 +
        PiggyBankConten.dimes * 10 + PiggyBankConten.quarters * 25 +
        PiggyBankConten.dollars * 100;

    return TotalPennies;
}


int main()
{
    
    int TotalPennies = CalculateTotalPennies(ReadPiggyBankContent());
    
    cout << endl << "Total Pennies = " << TotalPennies << endl;
    cout << endl << "Total Dollars = " << (float)TotalPennies / 100 << endl;

    return 0;
}

