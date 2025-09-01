#include <iostream>
using namespace std;

enum enDayOfWeek{Sun = 1 , Mon =2 , Tue = 3 , Wed = 4 , Thu = 5 , Fri = 6 , Sat = 7};

int ReadNumberInRange(string Message , int From , int To)
{
    int Number = 0;

    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number<From || Number>To);

        return Number;

}

enDayOfWeek ReadDayOfWeek()
{
    return (enDayOfWeek)ReadNumberInRange("Please enter day number Sun = 1 , Mon =2 , Tue = 3 , Wed = 4 , Thu = 5 , Fri = 6 , Sat = 7", 1, 7);
}

string GetDayOfWeek(enDayOfWeek Day)
{
    switch (Day)
    {
    case enDayOfWeek::Sun:
        return "It's Sunday\n";
    case enDayOfWeek::Mon:
        return "It's Monday\n";
    case enDayOfWeek::Tue:
        return "It's Tuesday\n";
    case  enDayOfWeek::Wed:
        return "It's Wednesday\n";
    case enDayOfWeek::Thu:
        return "It's Thursday\n";
    case enDayOfWeek::Fri:
        return "It's Friday\n";
    case enDayOfWeek::Sat:
        return "It's Saturday\n";
    default:
        return "Not  a valid Day.\n";
        }
}

int main()
{
   
    cout << GetDayOfWeek(ReadDayOfWeek());

}

