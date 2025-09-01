#include <iostream>
using namespace std;

int RandomNumber(int From, int To)
{
    int RandNum = rand() % (To - From + 1) + From;
    return RandNum;
}

void FillArrayWithRandomNumbers(int arr[100], int &arrlength)
{
    cout << "\nEnter number of elements:\n";
    cin >> arrlength;

    for (int i = 0; i < arrlength; i++)
        arr[i] = RandomNumber(1, 100);
}

void PrintArray(int arr[100], int NumberOfElements)
{
    for (int i = 0; i < NumberOfElements; i++)
        cout << arr[i] << " ";

    cout << endl;
}

void CopyArrayInReversedOrder(int arrSource[100], int arrDestination[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        arrDestination[i] = arrSource[arrLength-1-i];
}


int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arrLength;

    FillArrayWithRandomNumbers(arr, arrLength);

    int CopiedArr[100];
    CopyArrayInReversedOrder(arr, CopiedArr, arrLength);

    cout << "\nArray 1 elements:\n";
    PrintArray(arr, arrLength);

    cout << "\nArray 2 elements after copying array 1 in reversed order:\n";
    PrintArray(CopiedArr, arrLength);
}