#include <iostream>
#include <iomanip>
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

vector <stClientInfo> LoadClientsDataFromFile(string FileName)
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

void PrintHeader(short NumberOfClients)
{
    cout << "\t\t\t\t\tClient List (" <<NumberOfClients<< ") Client(s)";
    cout << "\n__________________________________________________";
    cout <<   "________________________________________________\n\n";

    cout << "| " << left << setw(15) << "Account Number";
    cout << "| " << left << setw(10) << "Pin Code";
    cout << "| " << left << setw(40) << "Clinet Name";
    cout << "| " << left << setw(12) << "Phone";
    cout << "| " << left << setw(12) << "Balance";
   
    cout << "\n__________________________________________________";
    cout << "________________________________________________\n\n";

}

void PrintClientRecord(stClientInfo Client)
{

    cout << "| " << left << setw(15) << Client.AccountNumber;
    cout << "| " << left << setw(10) << Client.PinCode;
    cout << "| " << left << setw(40) << Client.FullName;
    cout << "| " << left << setw(12) << Client.PhoneNumber;
    cout << "| " << left << setw(12) << Client.AccountBalance;

}

void PrintAllClientsData(vector <stClientInfo> vClients)
{
    
    PrintHeader(vClients.size());

    for (stClientInfo Client : vClients)
    {
        PrintClientRecord(Client);
        cout << endl;
    }

    cout << "__________________________________________________";
    cout << "________________________________________________\n";

}

int main()
{
    vector <stClientInfo> vClients = LoadClientsDataFromFile(ClientsFileName);
    PrintAllClientsData(vClients);
}
