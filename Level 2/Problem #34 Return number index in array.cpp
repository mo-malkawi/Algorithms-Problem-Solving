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

void FillArrayWithRandomNumbers(int arr[100], int& arrlength)
{
    cout << "Enter Number of elements:\n";
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

int FindNumberPositionInArray(int arr[100],int arrLength, short wantedNum)
{
    

    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] == wantedNum)
            return i;
    }

    return -1;

}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arrLength = 0;

    FillArrayWithRandomNumbers(arr, arrLength);

    cout << "\nArray 1 elements:\n";
    PrintArray(arr, arrLength);

    int WantedNum = ReadPositiveNumber("\nPlease enter a number to search for");
    cout << "\nThe number you are looking for is: " << WantedNum << endl;

    short NumberPosition = FindNumberPositionInArray(arr, arrLength, WantedNum);

    if (NumberPosition == -1)
        cout << "The number is not found :-(\n";
    else
    {
        cout << "The number found at position: " << NumberPosition << endl;
        cout << "The order of number is: " << NumberPosition + 1 << endl;
    }
}
