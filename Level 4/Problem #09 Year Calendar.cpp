#include <iostream>
#include <iomanip>
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

bool IsLeapYear(short Year)
{
    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

short NumberOfDaysInAMonth(short Year, short Month)
{
    int NumberOfDays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

    return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : NumberOfDays[Month - 1];
}

string MonthShortName(short Month)
{
    string MonthName[13] = { "","Jan" ,"Feb","Mar","Apr","May","June","Jul","Aug","Sep","Oct","Nov","Dec" };


    return MonthName[Month];
}

short DayOfWeekOrder(short Year, short Month, short Day)
{
    short a = (14 - Month) / 12;
    short y = Year - a;
    short m = Month + (12 * a) - 2;

    return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}

void PrintMonthCalendar(short Year, short Month)
{
    short NumberOfDays;

    short Current = DayOfWeekOrder(Year, Month, 1);
    NumberOfDays = NumberOfDaysInAMonth(Year, Month);

    printf("\n  ________________%s_______________\n\n", MonthShortName(Month).c_str());

    printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");

    short i;
    for (i = 0; i < Current; i++)
        printf("     ");

    for (short j = 1; j <= NumberOfDays; j++)
    {
        printf("%5d", j);

        if (++i == 7)
        {
            i = 0;
            printf("\n");
        }
    }

    printf("\n  __________________________________\n");
}

void PrintYearCalendar(short Year)
{
    printf("\n  __________________________________\n\n");
    printf("            Calendar - %d", Year);
    printf("\n  __________________________________\n");

    for (short i = 1; i <= 12; i++)
    {
        PrintMonthCalendar(Year, i);
    }

}

int main()
{

    PrintYearCalendar(ReadYear());

    system("pause>0");
    return 0;
}