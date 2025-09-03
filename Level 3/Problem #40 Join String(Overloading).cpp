#include <iostream>
#include <vector>
#include <string>
using namespace std;

string JoinString(vector <string> vString, string delim)
{
	string S1 = "";

	for (string& s : vString)
	{
		S1 += s + delim;
	}

	return S1.substr(0, S1.length() - delim.length());
}

string JoinString(string arr[4], short length, string delim)
{
	string S1 = "";

	for (short i = 0; i < length; i++)
	{
		S1 = S1 + arr[i] + delim;
	}

	return S1.substr(0, S1.length() - delim.length());

}

int main()
{
	vector <string> SeperatedString = { "Mohammad" , "Fadi" , "Ali" ,"Maher" };

	cout << "Vector After join:\n";
	cout << JoinString(SeperatedString, ",") << endl;

	string arr[4] = { "Mohammad" , "Fadi" , "Ali" ,"Maher" };

	cout << "\nArray after join:\n";
	cout << JoinString(arr, 4, " ") << endl;

}
