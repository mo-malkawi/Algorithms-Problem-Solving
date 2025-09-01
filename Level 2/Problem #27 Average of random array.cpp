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

int SumOfArray(int arr[100], int arrlength)
{
    int Sum = 0;

    for (int i = 0; i < arrlength; i++)
    {
        Sum += arr[i];
    }
    return Sum;
}

float AverageOfArray(int arr[100], int arrLength)
{
    return (float)SumOfArray(arr, arrLength) / arrLength;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength = ReadPositiveNumber("Enter Number of elements:");


    FillArrayWithRandomNumbers(arr, arrLength);
    PrintArray(arr, arrLength);

    cout << "\nAverage of all Numbers is : " << AverageOfArray(arr, arrLength) << endl;
}
