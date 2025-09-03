#include <iostream>
#include <vector>
#include <string>
using namespace std;

string JoinString(vector <string> vString, string delim)
{
	string S1 = "";

	for (string &s : vString)
	{
		S1 += s + delim;
	}

	return S1.substr(0,S1.length()-delim.length());
}

int main()
{
	vector <string> SeperatedString = { "Mohammad" , "Fadi" , "Ali" ,"Maher" };

	cout << "String After join:\n";
	cout << JoinString(SeperatedString, ",") << endl;
	
}
