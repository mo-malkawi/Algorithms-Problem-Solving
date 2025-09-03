#include <iostream>
#include <Vector>
#include <string>
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

stClientInfo ConvertLineToRecord(string S1 ,string Seperator ="#//#")
{
    stClientInfo Client;

    vector <string> vString;
    vString = Strings::SplitString(S1, Seperator);

    Client.AccountNumber = vString[0];
    Client.PinCode = vString[1];
    Client.FullName = vString[2];
    Client.PhoneNumber = vString[3];
    Client.AccountBalance = stod(vString[4]);

    return Client;

}

void PrintClientRecord(stClientInfo Client)
{
    cout << "\n\nThe following is the extracted client record:";

    cout << "\n\nAccount Number: " << Client.AccountNumber;
    cout << "\nPin Code        : " << Client.PinCode;
    cout << "\nName            : " << Client.FullName;
    cout << "\nPhone Numebr    : " << Client.PhoneNumber;
    cout << "\nAccount Balance : " << Client.AccountBalance;

}

int main()
{

    stClientInfo Client;

	string Line = "A150#//#1234#//#Mohammad Malkawi#//#0792989456#//#5270.000000";
    cout << "Line Record is:\n" << Line;

    Client = ConvertLineToRecord(Line);
    PrintClientRecord(Client);



}