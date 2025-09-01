#include <iostream>
#include <cstdlib>

using namespace std;

enum enCharType { SmallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };

int RandomNumber(int From , int To )
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

int main()
{
    srand((unsigned)time(NULL));

    cout << GetRandomCharacter(enCharType::SmallLetter) << endl;
    cout << GetRandomCharacter(enCharType::CapitalLetter) << endl;
    cout << GetRandomCharacter(enCharType::SpecialCharacter) << endl;
    cout << GetRandomCharacter(enCharType::Digit) << endl;

}


