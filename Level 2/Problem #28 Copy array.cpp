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

void CopyArray(int arrSource[100], int arrDestination[100], int NumberOfElements)
{
    
    for (int i = 0; i < NumberOfElements; i++)
        arrDestination[i] = arrSource[i];

}


int main()
{
    srand((unsigned)time(NULL));

    int arr[100] ;
    int arrLength = ReadPositiveNumber("Enter Number of elements:");


    FillArrayWithRandomNumbers(arr, arrLength);

    int CopiedArr[100];
    CopyArray(arr, CopiedArr, arrLength);

    cout << "\nArray 1 elements:\n";
    PrintArray(arr, arrLength);

    cout << "\nArray 2 elements after copy:\n";
    PrintArray(CopiedArr, arrLength);
}