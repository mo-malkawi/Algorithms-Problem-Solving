#include <iostream>
#include<string>
using namespace std;

string ReadText()
{
    string Text;

    cout << "Please enter a text\n";
    getline(cin, Text);

    return Text;
}

string EncryptText(string Text , int EncryptionKey)
{
    
    for (int i = 0; i <= Text.length();i++)
    {
        Text[i] = char((int)Text[i] + EncryptionKey);
    }

    return Text;
}

string DecryptText(string Text, int EncryptionKey)
{

    for (int i = 0; i <= Text.length();i++)
    {
        Text[i] = char((int)Text[i] - EncryptionKey);
    }

    return Text;
}

int main()
{
    
    const short EncryptionKey = 2;

    string Text = ReadText();
    string TextAfterEncryption = EncryptText(Text, EncryptionKey);
    string TextAfterDecryption = DecryptText(TextAfterEncryption, EncryptionKey);

    cout << "\nText Before Encryption : " << Text << endl;
    cout << "Text After Encryption : " << TextAfterEncryption << endl;
    cout << "Text After Decryption : " << TextAfterDecryption << endl;

}