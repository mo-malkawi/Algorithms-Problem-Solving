#include <iostream>
using namespace std;

struct stDate
{
    short Day;
    short Month;
    short Year;

};

short ReadYear()
{
    short Year;

    cout << "Please enter a year. ";
    cin >> Year;

    return Year;
}

short ReadMonth()
{
    short Month;
    do
    {
        cout << "Please enter a month. ";
        cin >> Month;
    } while (Month < 1 || Month > 12);

    return Month;
}

short ReadDay()
{
    short Day;

    cout << "\nPlease enter a day. ";
    cin >> Day;

    return Day;
}

stDate ReadFullDate()
{
    stDate Date;

    Date.Day = ReadDay();
    Date.Month = ReadMonth();
    Date.Year = ReadYear();

    return Date;
}

bool IsDate1BeforeThanDate2(stDate Date1, stDate Date2)
{

    return (Date1.Year < Date2.Year) ? true : ((Date1.Year == Date2.Year) ?
        ((Date1.Month < Date2.Month) ? true : ((Date1.Month == Date2.Month) ?
            Date1.Day < Date2.Day: false)) : false);

}

int main()
{
    stDate Date1 = ReadFullDate();
    stDate Date2 = ReadFullDate();

    if (IsDate1BeforeThanDate2(Date1, Date2))
    {
        cout << "\nYes, Date1 is less than Date2\n";
    }
    else
    {
        cout << "\nNo, Date1 is NOT less than Date2\n";
    }

}