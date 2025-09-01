#include <iostream>
using namespace std;

struct strTaskDuration 
{
    int Days, Hours, Minutes, Seconds;
};

int ReadPositiveNumber(string Message)
{
    float number = 0;

    do
    {
        cout << Message << endl;
        cin >> number;
    } while (number <= 0);

    return number;
}

strTaskDuration SecondsToTaskDuration(int TotalSeconds)
{
    strTaskDuration TaskDuration;

    const int SecondsPerDay = 24 * 60 * 60;
    const short SecondsPerHour = 60 * 60;
    const short SecondsPerMinute = 60;

    int remainder = 0;
    TaskDuration.Days = floor(TotalSeconds / SecondsPerDay);
    remainder = TotalSeconds % SecondsPerDay;

    TaskDuration.Hours = floor(remainder / SecondsPerHour);
    remainder = remainder % SecondsPerHour;

    TaskDuration.Minutes = floor(remainder / SecondsPerMinute);
    remainder = remainder % SecondsPerMinute;
    TaskDuration.Seconds = remainder;

    return TaskDuration;
}

void PrintTaskDuration(strTaskDuration TaskDuration)
{
    cout << endl;

    cout << TaskDuration.Days << ":" << TaskDuration.Hours << ":"
        << TaskDuration.Minutes << ":" << TaskDuration.Seconds << endl;
}

int main()
{
    int TotalSeconds = ReadPositiveNumber("Please enter Total Seconds.");
    PrintTaskDuration(SecondsToTaskDuration(TotalSeconds));

}
