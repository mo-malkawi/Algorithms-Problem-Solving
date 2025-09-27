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

    cout << "\nPlease enter a year. ";
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

    cout << "Please enter a day. ";
    cin >> Day;

    return Day;
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

short NumberOfDaysFromTheBeginningOfTheYear(short Day, short Month, short Year)
{

    short NumberOfDays = 0;

    for (short i = 1; i < Month; i++)
    {
        NumberOfDays += NumberOfDaysInAMonth(Year, i);
    }

    return NumberOfDays + Day;

}

stDate DateAddDays(short Days , stDate Date )
{

    short RemainingDays = Days + NumberOfDaysFromTheBeginningOfTheYear(Date.Day,Date.Month,Date.Year);
    short MonthDays = 0;

    Date.Month = 1;

    
    while (true)
    {
        MonthDays = NumberOfDaysInAMonth(Date.Year, Date.Month);

        if (RemainingDays > MonthDays)
        {
            RemainingDays -= MonthDays;
            Date.Month++;

            if (Date.Month > 12)
            {
                Date.Month = 1;
                Date.Year++;
            }

        }
        else
        {
            Date.Day = RemainingDays;
            break;
        }
    }

    return Date;
}

int NumberOfDaysToAdd()
{
    int NumberOfDays = 0;

    cout << "\nHow many days to add. ";
    cin >> NumberOfDays;

    return NumberOfDays;
}

stDate ReadFullDate()
{
    stDate Date;

    Date.Day = ReadDay();
    Date.Month = ReadMonth();
    Date.Year = ReadYear();

    return Date;
}

int main()
{
    stDate Date = ReadFullDate();
    short DaysToAdd = NumberOfDaysToAdd();
    
    Date = DateAddDays(DaysToAdd,Date);

    printf("\nDate after adding [%d] days is : %d/%d/%d\n", DaysToAdd, Date.Day, Date.Month, Date.Year);

}
