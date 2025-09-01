#include <iostream>
using namespace std;

void PrintCapital()
{
    for (int i = 65; i <= 90; i++)
        cout << char(i) << endl;
}

void PrintSmall()
{
    for (int i = 97; i <= 122; i++)
        cout << char(i) << endl;
}

int main()
{
    
    PrintCapital();
    cout << "********************\n";
    PrintSmall();
    
}
