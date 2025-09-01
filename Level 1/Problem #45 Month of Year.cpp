#include <iostream>
using namespace std;

enum enMonthInYear { Jan = 1, Feb = 2, Mar = 3, Apr = 4, May = 5, Jun = 6, Jul = 7, Aug = 8, Sep = 9, Oct = 10, Nov = 11, Dec = 12 };

int ReadNumberInRange(string Message, int From, int To)
{
    int Number = 0;

    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number<From || Number>To);

    return Number;

}

enMonthInYear ReadMonthOfYear()
{
    return (enMonthInYear)ReadNumberInRange("Please enter month number [1 to 12]", 1, 12);
}

string GetMonthOfYear(enMonthInYear Month)
{
    switch (Month)
    {
    case 1:
        return "January\n";
    case 2:
        return "February\n";
    case 3:
        return "March\n";
    case 4:
        return "April\n";
    case 5:
        return "May\n";
    case 6:
        return "June\n";
    case 7:
        return "July\n";
    case 8:
        return "August\n";
    case 9:
        return "September\n";
    case 10:
        return "October\n";
    case 11:
        return "November\n";
    case 12:
        return "December\n";
    default:
        return "Wrong Month\n";
    }
}

int main()
{
    cout << GetMonthOfYear(ReadMonthOfYear());

    return 0;
}
