#include <iostream>
#include "DateTimeLib.h"

short CountOverlapDays(stPeriod Period1, stPeriod Period2)
{
    short Period1Length = Periods::PeriodLengthInDays(Period1, true);
    short Period2Length = Periods::PeriodLengthInDays(Period2, true);
    short OverLapDays = 0;

    if (!Periods::DoPeriodsOverLap(Period1, Period2))
        return 0;

    if (Period1Length < Period2Length)
    {
        while (IsDate::IsDate1BeforeDate2(Period1.StartDate, Period1.EndDate))
        {
            if (Periods::IsDateInPeriod(Period2, Period1.StartDate))
                OverLapDays++;

            Period1.StartDate = FixDate::IncreaseDateByOneDay(Period1.StartDate);
        }
    }
    else
    {
        while (IsDate::IsDate1BeforeDate2(Period2.StartDate, Period2.EndDate))
        {
            if (Periods::IsDateInPeriod(Period1, Period2.StartDate))
                OverLapDays++;

            Period2.StartDate = FixDate::IncreaseDateByOneDay(Period2.StartDate);
        }
    }

    return OverLapDays;
}

int main()
{
    stPeriod Period1 = Input::ReadPeriod();
    stPeriod Period2 = Input::ReadPeriod();

    cout << "\nOverlap days count is : " << CountOverlapDays(Period1, Period2);

    system("pause>0");

}
