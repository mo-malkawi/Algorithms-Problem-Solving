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
	int counter = 3;

	do
	{
		counter--;
		PinCode = ReadPinCode();

		if (PinCode == "1234")
		{
			return 1;
		}
		else
		{
			cout << "\nWrong PIN , you have " << counter << " more tries\n";
			system("color 4F"); // Makes screen Red
		}
	} while (counter >=1 && PinCode != "1234");

	return 0;

}

int main()
{

	if (Login())
	{
		system("color 2F");// Makes screen green
		cout << "\nYour account Balance is : " << 7500 << endl;
	}
	else
	{
		cout << "\nYour Card is blocked , Call the bank for help\n";
	}

	return 0;

}
