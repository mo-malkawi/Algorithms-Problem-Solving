#include <iostream>
#include <fstream>
#include <limits>
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

stClientInfo ReadNewClient()
{
    stClientInfo Client;

    cout << "\n\nEnter Account Number: ";
    // ws will extract all the whitespace characters
    getline(cin >> ws , Client.AccountNumber);

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

void AddDataLineToFile(string FileName , string stDataLine)
{
    fstream MyFile;

    MyFile.open(FileName, ios::out | ios::app);

    if (MyFile.is_open())
    {
        MyFile << stDataLine << endl;

        MyFile.close();
    }

}

void AddNewClient()
{
    stClientInfo Client;
    Client = ReadNewClient();
    AddDataLineToFile(ClientsFileName, ConvertRecordToLine(Client));

}

void AddClients()
{
    char MoreClients = 'Y';
    
    do
    {
        system("cls");

        cout << "Adding New Client:";
        AddNewClient();

        cout << "\nClient Added Successfully, do you want to add more clients?  ";
        cin >> MoreClients;

    } while (MoreClients == 'y' || MoreClients == 'Y');

}

int main()
{
    AddClients();

}
