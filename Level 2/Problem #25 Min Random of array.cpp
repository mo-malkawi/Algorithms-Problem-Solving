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

int RandomNumber(int From, int To)
{
    int RandNum = rand() % (To - From + 1) + From;
    return RandNum;
}

void FillArrayWithRandomNumbers(int arr[100], int arrlength)
{
    for (int i = 0; i < arrlength; i++)
        arr[i] = RandomNumber(1, 100);
}

void PrintArray(int arr[100], int NumberOfElements)
{
    cout << "\nArray Elements : ";
    for (int i = 0; i < NumberOfElements; i++)
        cout << arr[i] << " ";

    cout << endl;
}

int MinNumberInArray(int arr[100], int arrlength)
{
    short MinNumber = 0;
    MinNumber = arr[0];
    for (int i = 0; i < arrlength; i++)
    {
        if (arr[i] < MinNumber)
            MinNumber = arr[i];
    }
    return MinNumber;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength = ReadPositiveNumber("Enter Number of elements:");


    FillArrayWithRandomNumbers(arr, arrLength);
    PrintArray(arr, arrLength);

    cout << "\nMinimum Number is : " << MinNumberInArray(arr, arrLength) << endl;
}
