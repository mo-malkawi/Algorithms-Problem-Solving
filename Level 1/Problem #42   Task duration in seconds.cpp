#include <iostream>
#include <cmath>
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

strTaskDuration ReadTaskDuration()
{
	strTaskDuration TaskDuration;
	TaskDuration.Days = ReadPositiveNumber("Please enter number of days.");
	TaskDuration.Hours = ReadPositiveNumber("Please enter number of hours.");
	TaskDuration.Minutes = ReadPositiveNumber("Please enter number of minutes.");
	TaskDuration.Seconds = ReadPositiveNumber("Please enter number of seconds.");

	return TaskDuration;
}

int TaskDurationInSeconds(strTaskDuration TaskDuration)
{
	int DurationInSeconds = 0;

	DurationInSeconds = TaskDuration.Days * 24 * 60 * 60;
	DurationInSeconds += TaskDuration.Hours * 60 * 60;
	DurationInSeconds += TaskDuration.Minutes * 60;
	DurationInSeconds += TaskDuration.Seconds;

	return DurationInSeconds;
}

int main()
{
    
	cout << "\nTask Duration In Seconds : " << TaskDurationInSeconds(ReadTaskDuration()) << endl;

	return 0;
}

