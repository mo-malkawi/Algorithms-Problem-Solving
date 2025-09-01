#include <iostream>
using namespace std;

struct strInfo
{
    int Age;
    bool HasDrivingLicense;
    bool HasRecommendaion;

};

strInfo ReadInfo()
{
    strInfo Info;

    cout << "Please enter your age.\n";
    cin >> Info.Age;

    cout << "Do you Have a driving license?\n";
    cin >> Info.HasDrivingLicense;

    cout << "Do you have a recommendation?\n";
    cin >> Info.HasRecommendaion;

    return Info;

}

bool IsAccepted(strInfo Info)
{
    if(Info.HasRecommendaion)
    {
        return true;
    }
    else
    {
        return (Info.Age > 21 && Info.HasDrivingLicense);
    }
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
