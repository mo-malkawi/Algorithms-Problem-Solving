#include <iostream>
#include "DateTimeLib.h"

enum enDateCompare { Before = -1, Equal = 0, After = 1 };

enDateCompare CompareDates(stDate Date1 , stDate Date2)
{
    if (IsDate::IsDate1BeforeDate2(Date1, Date2))
        return enDateCompare::Before;

    if (IsDate::IsDate1EqualToDate2(Date1, Date2))
        return enDateCompare::Equal;

    return enDateCompare::After;
}

int main()
{
    cout << "Enter date1:";
    stDate Date1 = Input::ReadFullDate();
    
    cout << "\nEnter date2:";
    stDate Date2 = Input::ReadFullDate();

    cout << "\nCompare Result = " << CompareDates(Date1, Date2);

}