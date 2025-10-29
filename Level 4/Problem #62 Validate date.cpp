#include <iostream>
#include "DateTimeLib.h"

bool IsValidDate(stDate Date)
{
    return !(Date.Month > 12 || Date.Month < 1 ||
        Date.Day > FixDate::NumberOfDaysInAMonth(Date.Year, Date.Month) || Date.Day < 1);
}

int main()
{
    stDate Date = Input::ReadFullDate();

    if (IsValidDate(Date))
        cout << "\nYes, date is valid.";
    else
        cout << "\nNo, date is NOT valid.";

}