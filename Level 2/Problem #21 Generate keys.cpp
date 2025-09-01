#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

enum enCharType{SmallLetter = 1 , CapitalLetter = 2 , SpecialCharacter = 3 , Digit = 4};

int RandomNumber(int From, int To)
{

    int RandNum = rand() % (To - From + 1) + From;
    return RandNum;

}

char GetRandomCharacter(enCharType CharType)
{
    switch (CharType)
    {
    case enCharType::SmallLetter:
        return RandomNumber(97, 122);
    case enCharType::CapitalLetter:
        return RandomNumber(65, 90);
    case enCharType::SpecialCharacter:
        return RandomNumber(33, 47);
    case enCharType::Digit:
        return RandomNumber(48, 57);
    }

}

int ReadPositiveNumber(string Message)
{
    int number = 0;

    do
    {
        cout << Message << endl;
        cin >> number;
    } while (number <= 0);

    return number;
}

string GenerateWord(enCharType CharType , short length)
{
    string Word = "";

    for (int i = 1; i <=length ; i++)
    {
        Word = Word + GetRandomCharacter(CharType);
    }

    return Word;
}

string GenerateKey()
{
    string Key = "";

    Key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key =Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(enCharType::CapitalLetter, 4) ;

    return Key;
}

void GenerateKeys(int NumberOfKeys)
{
    for (int i = 1; i <= NumberOfKeys; i++)
    {
        cout << "Key [" << i << "] : ";
        cout << GenerateKey() << endl;
        
    }
}

int main()
{
    srand((unsigned)time(NULL));

    GenerateKeys(ReadPositiveNumber("Please enter Number of keys you want to generate"));
   
}

