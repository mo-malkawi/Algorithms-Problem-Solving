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
	vector <string> vDate = SplitString(DateString,"/");

	Date.Day = stoi(vDate[0]);
	Date.Month = stoi(vDate[1]);
	Date.Year = stoi(vDate[2]);

	return Date;

}

string DateToString(stDate strDate)
{
	return to_string(strDate.Day) + "/" + to_string(strDate.Month) + "/" + to_string(strDate.Year);
}

int main()
{
	string DateString = ReadDate();

	stDate Date = StringToDate(DateString);

	cout << "\nDay:" << Date.Day << endl;
	cout << "Month:" << Date.Month << endl;
	cout << "Year:" << Date.Year << endl;

	cout << "\nYou entered: " << DateToString(Date) << endl;

}