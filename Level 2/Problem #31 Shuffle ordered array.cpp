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

void Swap(int& A, int& B)
{
    int temp;

    temp = A;
    A = B;
    B = temp;

}

void FillArrayFrom1ToN(int arr[100] , int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        arr[i] = i+1;
}

void ShuffleArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        Swap(arr[RandomNumber(1, arrLength) - 1], arr[RandomNumber(1, arrLength) - 1]);
}

void PrintArray(int arr[100], int NumberOfElements)
{
    for (int i = 0; i < NumberOfElements; i++)
        cout << arr[i] << " ";

    cout << endl << endl;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arrLength = 0;
    arrLength = ReadPositiveNumber("Enter number of elements");

    FillArrayFrom1ToN(arr, arrLength);

    cout << "Array elements before shuffle:\n";
    PrintArray(arr, arrLength);

    ShuffleArray(arr, arrLength);

    cout << "Array elements after shuffle:\n";
    PrintArray(arr, arrLength);
}
