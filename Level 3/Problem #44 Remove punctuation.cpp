#include <iostream>
#include <cctype>
using namespace std;

string RemovePunctFromString(string S1)
{
    string S2 = "";

    for (short i = 0; i < S1.length(); i++)
    {
        if (!ispunct(S1[i]))
        {
            S2 += S1[i];
        }

    }

    return S2;
}

int main()
{
    string S1 = "Welcome to Jordan, It's a beautiful country.";

    cout << "Original String:\n" << S1;

    cout << "\n\nPunctuation Removed:\n" << RemovePunctFromString(S1);
    cout << endl;

}
