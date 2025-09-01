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

int MaxNumberInArray(int arr[100], int arrlength)
{
    short MaxNumber = 0;

    for (int i = 0; i < arrlength; i++)
    {
        if (arr[i] > MaxNumber)
            MaxNumber = arr[i];
    }
    return MaxNumber;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength = ReadPositiveNumber("Enter Number of elements:");


    FillArrayWithRandomNumbers(arr, arrLength);
    PrintArray(arr, arrLength);

    cout << "\nMax Number is : " << MaxNumberInArray(arr, arrLength) << endl;
}
