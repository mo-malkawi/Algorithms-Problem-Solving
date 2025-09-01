#include <iostream>
using namespace std;

int ReadNumber()
{
    int N;

    cout << "Please enter a number\n";
    cin >> N;
    return N;
}

int ReadPower()
{
    int P;

    cout << "Please enter power.\n";
    cin >> P;

    return P;
}

int PowerOfM(int Num, int M)
{
    if (M == 0)
    {
        return 1;
    }
    int  P = 1;

    for (int i = 1; i <= M; i++)
    {
        P = P * Num;
    }
    
    return P;
}


int main()
{

    cout << endl <<"Result = " << PowerOfM(ReadNumber(), ReadPower()) << endl;

    return 0;

}
