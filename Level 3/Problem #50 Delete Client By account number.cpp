#include <iostream>
#include <fstream>
#include "MyLib.h"
using namespace std;
const string ClientsFileName = "ClientsForDelete.txt";

struct stClientInfo
{
    string AccountNumber;
    string PinCode;
    string FullName;
    string PhoneNumber;
    double AccountBalance;
    bool MarkForDelete = false;
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

bool FindClientByAccountNumber(string AccountNumber , vector <stClientInfo> &vClients, stClientInfo& Client)
{

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

    cout << Message;
    cin >> AccountNumber;

    return AccountNumber;
}

void SaveClientsDataToFile(string FileName, vector <stClientInfo> &vClients)
{
    fstream MyFile;
    MyFile.open(FileName, ios::out);

    string DataLine;

    if (MyFile.is_open())
    {
        for (stClientInfo &C : vClients)
        {
            if (C.MarkForDelete == false)
            {
                DataLine = ConvertRecordToLine(C);
                MyFile << DataLine << endl;
            }
        }

        MyFile.close();
    }


}

bool MarkClientForDeleteByAccountNumber(string AccountNumber, vector <stClientInfo>& vClients)
{
    for (stClientInfo& C : vClients)
    {
        C.MarkForDelete = true;
        return true;
    }

    return false;
}

bool DeleteClientByAccountNumber(string AccountNumber, vector <stClientInfo> &vClients)
{
    
    stClientInfo Client;
    char DeleteClient = 'n';

    if (FindClientByAccountNumber(AccountNumber, vClients, Client))
    {
        PrintClientCard(Client);

        cout << "\nAre you sure you want to delete this Client?  y/n   ";
        cin >> DeleteClient;

        if (DeleteClient == 'y' || DeleteClient == 'Y')
        {
            MarkClientForDeleteByAccountNumber(AccountNumber, vClients);
            SaveClientsDataToFile(ClientsFileName, vClients);

            //Refresh Clients
            vClients = LoadClientsFromDataFile(ClientsFileName);

            cout << "\n\nClient Deleted Successfully.\n";
            return true;
        }
    }
    else
    {
        cout << "\nClient with account number (" << AccountNumber << ") is Not Found!";
        return false;
    }
    
   

    
}

int main()
{

    vector <stClientInfo> vClients = LoadClientsFromDataFile(ClientsFileName);

    string AccountNumber = ReadAccountNumber("Please enter account number.  ");

    DeleteClientByAccountNumber(AccountNumber, vClients);

}
