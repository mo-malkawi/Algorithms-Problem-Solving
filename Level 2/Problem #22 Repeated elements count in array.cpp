#include <iostream>
using namespace std;

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

void ReadArray(int arr[100],int &arrlength)
{
    cout << "Enter number of elemnts\n";
    cin >> arrlength;

    cout << "\nEnter array elements\n";
    for (int i = 0; i < arrlength; i++)
    {
        cout << "Element ["<< i+1 <<"] : ";
        cin >> arr[i];
    }
    cout << endl;
}

void PrintArray(int arr[100] ,int NumberOfElements)
{
    cout << "\nOriginal array : ";
    for (int i = 0; i < NumberOfElements; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int TimesRepeated(int arr[100],int DigitToCheck  ,int NumberOfElements)
{
    short counter = 0;

    for (int i = 0; i < NumberOfElements; i++)
    {
        if (arr[i] == DigitToCheck)
            counter++;
    }
    return counter;
}

int main()
{
    int arr[100] , arrLength , DigitToCheck;

    ReadArray(arr, arrLength);

    DigitToCheck = ReadPositiveNumber("Enter the number you want to check: ");

    PrintArray(arr, arrLength);

    cout << "\nNumber " << DigitToCheck 
        << " is repeated " << TimesRepeated(arr, DigitToCheck, arrLength)
        << " times(s)\n";
}
