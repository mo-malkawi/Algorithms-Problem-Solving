#include <iostream>
using namespace std;

void PrintWordsFromAAAtoZZZ()
{
    cout << "\n";
    string word = "";

    for (int i = 65; i <= 90; i++)
    {
        
        for (int z = 65; z <= 90; z++)
        {
            
            for (int j = 65; j <= 90; j++)
            {
               
                    word = word + (char)i;
                    word = word + (char)z;
                    word = word + (char)j;
             
                    cout << word << endl;

                    word = "";
            }
            
           
        }
        cout << "\n--------------------------\n";
    }
}

int main()
{
    PrintWordsFromAAAtoZZZ();
}
