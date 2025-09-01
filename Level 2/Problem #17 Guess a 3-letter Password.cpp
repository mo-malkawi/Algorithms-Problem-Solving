#include <iostream>
#include<string>
using namespace std;

string ReadPasword()
{
    string Password;

    cout << "Please enter a 3-Letter password(All capital)\n";
    cin >> Password;

    return Password;
}

bool GuessPassword(string OriginalPassword)
{
    cout << "\n";
    string word = "";
    int counter = 1;

    for (int i = 65; i <= 90; i++)
    {

        for (int z = 65; z <= 90; z++)
        {

            for (int j = 65; j <= 90; j++)
            {

                word = word + (char)i;
                word = word + (char)z;
                word = word + (char)j;

                cout << "Trial [" << counter <<"] : " << word << endl;

                if (word == OriginalPassword)
                {
                    cout << "\nPassword is " << word << endl;
                    cout << "Found after " << counter << " Trial(s)\n";
                    return true;
                }

                word = "";
                counter++;
            }
        }
    }
    return false;
}


int main()
{
    GuessPassword(ReadPasword());
}
