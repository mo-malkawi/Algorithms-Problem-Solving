#include <iostream>
#include <limits>
#include "MyLib.h"
using namespace std;

struct stClientInfo
{
    string AccountNumber;
    string PinCode;
    string FullName;
    string PhoneNumber;
    double AccountBalance;
};

stClientInfo ReadNewClient()
{
    stClientInfo Client;

    cout << "\n\nEnter Account Number: ";
    getline(cin,Client.AccountNumber);

    cout << "Enter PinCode: ";
    getline(cin, Client.PinCode);

    cout << "Enter Name: ";
    getline(cin, Client.FullName);

    cout << "Enter Phone Number: ";
    getline(cin, Client.PhoneNumber);

    cout << "Enter Account Balance: ";
    cin >> Client.AccountBalance;

    return Client;
}

string ConvertRecordToLine(stClientInfo Client, string Seperator = "#//#")
{
    string stClientRecord = "";

    stClientRecord += Client.AccountNumber + Seperator;
    stClientRecord += Client.PinCode + Seperator;
    stClientRecord += Client.FullName + Seperator;
    stClientRecord += Client.PhoneNumber + Seperator;
    stClientRecord += to_string(Client.AccountBalance);

    return stClientRecord;


}

int main()
{
    cout << "Please enter client data:";

    stClientInfo ClientInfo;
    ClientInfo = ReadNewClient();

    cout << "\n\n\nClient Record for saving is:\n" << ConvertRecordToLine(ClientInfo) << endl;
   
}
