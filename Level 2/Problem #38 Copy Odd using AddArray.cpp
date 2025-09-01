#include <iostream>
using namespace std;

enum enNumberType { Odd = 1, Even = 2 };

enNumberType CheckNumberType(int Num)
{
    int Result = Num % 2;
    if (Result == 0)
        return enNumberType::Even;
    else
        return enNumberType::Odd;
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

int RandomNumber(int From, int To)
{
    int RandNum = rand() % (To - From + 1) + From;
    return RandNum;
}

void AddArrayElement(int Number, int arr[100], int& arrLength)
{
    arrLength++;
    arr[arrLength - 1] = Number;
}

void FillArrayWithRandomNumbers(int arr[100], int& arrlength)
{
    cout << "Please enter number of elements:\n";
    cin >> arrlength;

    for (int i = 0; i < arrlength; i++)
        arr[i] = RandomNumber(1, 100);
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";

    cout << endl;
}

void CopyOddNumbers(int arrSource[100], int arrDestination[100], int arrLength, int& arrDestinationLength)
{

    for (int i = 0; i < arrLength; i++)
    {
        if (CheckNumberType(arrSource[i]) == enNumberType::Odd)
            AddArrayElement(arrSource[i], arrDestination, arrDestinationLength);
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arrLength = 0, arr2Length = 0;

    FillArrayWithRandomNumbers(arr, arrLength);

    int arr2[100];
    CopyOddNumbers(arr, arr2, arrLength, arr2Length);

    cout << "\nArray 1 elements:\n";
    PrintArray(arr, arrLength);

    cout << "\nArray 2 Odd Numbers:\n";
    PrintArray(arr2, arr2Length);
}