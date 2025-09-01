#include <iostream>
using namespace std;

string ReadPinCode()
{
	string PinCode;
	cout << "Please enter PIN code\n";
	cin >> PinCode;

	return PinCode;
}

bool Login()
{
	string PinCode;

	do
	{
		PinCode = ReadPinCode();

		if(PinCode == "1234")
		{
			return 1;
		}
		else
		{
			cout << "\nWrong PIN\n";
			system("color 4F"); // Makes screen Red
		}
	} while (PinCode != "1234");

	return 0;
	
}

int main()
{

	if (Login())
	{
		system("color 2F");// Makes screen green
		cout << "\nYour account Balance is : " << 7500 << endl;
	}

	return 0;

}
