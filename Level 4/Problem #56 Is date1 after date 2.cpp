#include <iostream>
#include "DateTimeLib.h"

bool IsDate1AfterDate2(stDate Date1, stDate Date2)
{
	return (!IsDate::IsDate1BeforeDate2(Date1, Date2) && !IsDate::IsDate1EqualToDate2(Date1, Date2));
}

int main()
{
	cout << "Enter Date1:";
	stDate Date1 = Input::ReadFullDate();
	
	cout << "\nEnter Date2:";
	stDate Date2 = Input::ReadFullDate();

	if (IsDate1AfterDate2(Date1, Date2))
		cout << "\nYes, Date1 is after Date2";
	else
		cout << "\nNo, Date1 is NOT after Date2";

}