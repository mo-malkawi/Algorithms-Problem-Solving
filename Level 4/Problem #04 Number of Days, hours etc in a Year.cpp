#include <iostream>
using namespace std;

short ReadYear()
{
    short Year;

    cout << "Please enter a year to calculate days, hours, minutes, seconds. ";
    cin >> Year;

    return Year;
}

bool IsLeapYear(short Year)
{
    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

short DaysInYear(short Year)
{  
    return IsLeapYear(Year)? 366 : 365;
}

short HoursInYear(short Year)
{
    return DaysInYear(Year) * 24;
}

int MinutesInYear(short Year)
{
    return HoursInYear(Year) * 60;
}

int SecondsInYear(short Year)
{
    return MinutesInYear(Year) * 60;
}

int main()
{
    short Year = ReadYear();

    cout << "\nNumber of Days in Year [" << Year << "] is " << DaysInYear(Year) ;
    cout << "\nNumber of Hours in Year [" << Year << "] is " << HoursInYear(Year) ;
    cout << "\nNumber of Minutes in Year [" << Year << "] is " << MinutesInYear(Year) ;
    cout << "\nNumber of Seconds in Year [" << Year << "] is " << SecondsInYear(Year) ;

    system("pause>0");

}