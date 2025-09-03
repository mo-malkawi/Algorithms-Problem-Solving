#include <iostream>
#include<cctype>
#include "MyLib.h"
using namespace std;

enum enWhatToCount { SmallLetters = 1, CapitallLetters = 2, AllLetters = 3 };

// Generic Function
short CountLetters(string S1, enWhatToCount WhatToCount=enWhatToCount::AllLetters)
{
    short Counter = 0;

    for (short i = 0; i < S1.length(); i++)
    {
        if (WhatToCount == enWhatToCount::AllLetters && (isupper(S1[i]) || islower(S1[i])))
            Counter++;

        if (WhatToCount == enWhatToCount::CapitallLetters && isupper(S1[i]))
            Counter++;

        if (WhatToCount == enWhatToCount::SmallLetters && islower(S1[i]))
            Counter++;
    }
    return Counter;
}

short CountCapitalLetters(string S1)
{
    short NumberOfCapitalLetters = 0;

    for (short i = 0; i < S1.length(); i++)
    {
        if (isupper(S1[i]))
            NumberOfCapitalLetters++;
    }
    return NumberOfCapitalLetters;
}

short CountSmallLetters(string S1)
{
    short NumberOfSmallLetters = 0;

    for (short i = 0; i < S1.length(); i++)
    {
        if (islower(S1[i]))
            NumberOfSmallLetters++;
    }
    return NumberOfSmallLetters;
}


int main()
{
    string S1 = input::ReadString("Please enter your string.");

    printf("\nString length = %d\n", S1.length());
    printf("Capital letters count = %d\n", CountCapitalLetters(S1));
    printf("Small letters cout = %d\n", CountSmallLetters(S1));

    cout << "\n\nMethod 2\n\n";

    printf("\All letters count = %d\n", CountLetters(S1));
    printf("Capital letters count = %d\n", CountLetters(S1,enWhatToCount::CapitallLetters));
    printf("Small letters cout = %d\n", CountLetters(S1,enWhatToCount::SmallLetters));

}