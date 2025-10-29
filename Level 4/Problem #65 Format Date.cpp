#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct stDate
{
	short Day;
	short Month;
	short Year;

};

string ReadDate()
{
	cout << "Please enter date dd/mm/yyyy.  ";

	string DateString;
	getline(cin >> ws, DateString);

	return DateString;
}

vector <string> SplitString(string S1, string delim)
{
	vector <string> Splitted;

	short pos = 0;
	string sWord;

	while ((pos = S1.find(delim)) != string::npos)
	{
		sWord = S1.substr(0, pos);
		if (sWord != "")
		{
			Splitted.push_back(sWord);
		}

		S1.erase(0, pos + delim.length());
	}

	if (S1 != "")
	{
		Splitted.push_back(S1);
	}

	return Splitted;
}

stDate StringToDate(string DateString)
{
	stDate Date;
	vector <string> vDate = SplitString(DateString, "/");

	Date.Day = stoi(vDate[0]);
	Date.Month = stoi(vDate[1]);
	Date.Year = stoi(vDate[2]);

	return Date;

}

string ReplaceWordInStringUsingBuiltInFunction(string S1, string StringToReplace, string NewWord)
{
	short Pos = S1.find(StringToReplace);

	while (Pos != string::npos)
	{
		S1 = S1.replace(Pos, StringToReplace.length(), NewWord);
		Pos = S1.find(StringToReplace);
	}

	return S1;
}

string FormatDate(stDate Date , string Format = "dd/mm/yyyy")
{
	string FormatedString = "";
	FormatedString = ReplaceWordInStringUsingBuiltInFunction(Format, "dd", to_string(Date.Day));
	FormatedString = ReplaceWordInStringUsingBuiltInFunction(FormatedString, "mm", to_string(Date.Month));
	FormatedString = ReplaceWordInStringUsingBuiltInFunction(FormatedString, "yyyy", to_string(Date.Year));
	
	return FormatedString;

}

int main()
{
	string DateString = ReadDate();

	stDate Date = StringToDate(DateString);

	cout << "\n" << FormatDate(Date) << endl;

	cout << "\n" << FormatDate(Date, "yyyy/dd/mm") << endl;

	cout << "\n" << FormatDate(Date, "mm/dd/yyyy") << endl;

	cout << "\n" << FormatDate(Date, "mm-dd-yyyy") << endl;

	cout << "\n" << FormatDate(Date, "dd-mm-yyyy") << endl;

	cout << "\n" << FormatDate(Date, "Day:dd, Month:mm, Year:yyyy");

	system("pause>0");

}