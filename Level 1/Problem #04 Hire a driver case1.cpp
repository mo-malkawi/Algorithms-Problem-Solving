#include <iostream>
using namespace std;

struct strInfo 
{
    int Age;
    bool HasDrivingLicense;

};

strInfo ReadInfo()
{
    strInfo Info;

    cout << "Please enter your age.\n";
    cin >> Info.Age;

    cout << "Do you Have a driving license?\n";
    cin >> Info.HasDrivingLicense;

    return Info;

}

bool IsAccepted(strInfo Info)
{

    return (Info.Age > 21 && Info.HasDrivingLicense);

}

void PrintResult(strInfo Info)
{

    if (IsAccepted(Info))
        cout << "Hired\n";
    else
        cout << "Rejected\n";
}

int main()
{
    
    PrintResult(ReadInfo());
   

}
