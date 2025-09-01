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
    
    for (int i = 0; i < NumberOfElements; i++)
        cout << arr[i] << " ";

    cout << endl;
}

void SumOf2Arrays(int arr[100], int arr2[100],int arr3[100], int arrlength)
{
    for (int i = 0; i < arrlength; i++)
    {
        arr3[i] = arr[i] + arr2[i];
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100] ,arr2[100], arrSum[100];
    int arrLength = ReadPositiveNumber("Enter Number of elements:");


    FillArrayWithRandomNumbers(arr, arrLength);
    FillArrayWithRandomNumbers(arr2, arrLength);

    SumOf2Arrays(arr, arr2, arrSum, arrLength);

    cout << "\nArray 1 Elements : ";
    PrintArray(arr, arrLength);

    cout << "\nArray 2 Elements : ";
    PrintArray(arr2, arrLength);

    cout << "\nSum of array1 and array2 elements :\n" ;
    PrintArray(arrSum, arrLength);
}
