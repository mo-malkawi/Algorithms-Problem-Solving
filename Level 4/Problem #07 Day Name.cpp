#include <iostream>
using namespace std;

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
        cout << "\nPlease enter a month. ";
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

short DayOfWeekOrder(short Year, short Month , short Day)
{
    short a = (14 - Month) / 12;
    short y = Year - a;
    short m = Month + (12 * a) - 2;

    return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}

string DayShortName(short DayOrder)
{
    string DayOfTheWeek[7] = { "Sunday", "Monday" ,"Tuesday" ,"Wednesday" ,"Thursday","Friday", "Saturday" };

    return DayOfTheWeek[DayOrder];
}

int main()
{
    short Year = ReadYear();
    short Month = ReadMonth();
    short Day = ReadDay();

    cout << "\nDate      : " << Day << "/" << Month << "/" << Year ;
    cout << "\nDay Order : " << DayOfWeekOrder(Year,Month,Day) ;
    cout << "\nDay Name  : " << DayShortName(DayOfWeekOrder(Year, Month, Day)) ;

    system("pause>0");
}

