#include <iostream>
using namespace std;

void FillArray(int arr[100] , int &arrLength)
{
    arrLength = 10;
    arr[0] = 10;
    arr[1] = 10;
    arr[2] = 10;
    arr[3] = 50;
    arr[4] = 50;
    arr[5] = 70;
    arr[6] = 70;
    arr[7] = 70;
    arr[8] = 70;
    arr[9] = 90;
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";

    cout << endl;
}

short FindNumberPositionInArray(short wantedNum, int arr[100], int arrLength)
{


    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] == wantedNum)
            return i;
    }

    return -1;

}

bool IsNumberInArray(short wantedNum, int arr[100], int arrLength)
{
    return FindNumberPositionInArray(wantedNum, arr, arrLength) != -1;
}

void AddArrayElement(int Number, int arr[100], int& arrLength)
{
    arrLength++;
    arr[arrLength - 1] = Number;
}

void CopyDistinctNumbers(int arrSource[100], int arrDestination[100], int arrLength, int& arrDestinationLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        if (!IsNumberInArray(arrSource[i], arrDestination, arrDestinationLength))
            AddArrayElement(arrSource[i], arrDestination, arrDestinationLength);
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arrSource[100], SourceLength = 0, arrDestination[100], DestinationLength = 0;
    FillArray(arrSource, SourceLength);
    
    cout << "\nArray 1 elements:\n";
    PrintArray(arrSource, SourceLength);

    CopyDistinctNumbers(arrSource, arrDestination, SourceLength, DestinationLength);

    cout << "\nArray 2 distinct elements:\n";
    PrintArray(arrDestination, DestinationLength);
} 