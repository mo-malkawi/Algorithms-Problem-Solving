#include <iostream>
#include <fstream>
#include "MyLib.h"
using namespace std;
const string ClientsFileName = "Clients.txt";

struct stClientInfo
{
    string AccountNumber;
    string PinCode;
    string FullName;
    string PhoneNumber;
    double AccountBalance;
};

stClientInfo ConvertLineToRecord(string Line, string Seperator = "#//#")
{
    stClientInfo Client;
    vector <string> vClientData;

    vClientData = Strings::SplitString(Line, Seperator);

    Client.AccountNumber = vClientData[0];
    Client.PinCode = vClientData[1];
    Client.FullName = vClientData[2];
    Client.PhoneNumber = vClientData[3];
    Client.AccountBalance = stod(vClientData[4]);

    return Client;

}

vector <stClientInfo> LoadClientsFromDataFile(string FileName)
{
    vector <stClientInfo> vClients;

    fstream MyFile;
    MyFile.open(FileName, ios::in);

    if (MyFile.is_open())
    {
        string Line;
        stClientInfo Client;

        while (getline(MyFile, Line))
        {
            Client = ConvertLineToRecord(Line);

            vClients.push_back(Client);

        }

        MyFile.close();

    }

    return vClients;

}

bool FindClientByAccountNumber(string AccountNumber,stClientInfo &Client)
{

    vector <stClientInfo> vClients = LoadClientsFromDataFile(ClientsFileName);

    for (stClientInfo C : vClients)
    {
        if (C.AccountNumber == AccountNumber)
        {
            Client = C;
            return true;
        }
    }
    return false;
}

void PrintClientCard(stClientInfo Client)
{
    cout << "\nThe following are the client details:";

    cout << "\n\nAccount Number  : " << Client.AccountNumber;
    cout << "\nPin Code        : " << Client.PinCode;
    cout << "\nName            : " << Client.FullName;
    cout << "\nPhone Number    : " << Client.PhoneNumber;
    cout << "\nAccount balance : " << Client.AccountBalance << endl;

}

string ReadAccountNumber(string Message)
{
    string AccountNumber;

    cout << Message ;
    cin >> AccountNumber;

    return AccountNumber;
}

int main()
{

    stClientInfo Client;
    string AccountNumber = ReadAccountNumber("Please enter account number.  ");

    if (FindClientByAccountNumber(AccountNumber,Client))
        PrintClientCard(Client);
    else
        cout << "\nClient with account number (" << AccountNumber << ") is Not Found!";

}
