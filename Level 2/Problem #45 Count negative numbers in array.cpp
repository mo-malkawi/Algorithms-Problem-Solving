#include <iostream>
using namespace std;

int RandomNumber(int From, int To)
{
    int RandNum = rand() % (To - From + 1) + From;
    return RandNum;
}

void FillArrayWithRandomNumbers(int arr[100], int& arrlength)
{
    cout << "Please enter number of elements:\n";
    cin >> arrlength;

    for (int i = 0; i < arrlength; i++)
        arr[i] = RandomNumber(-100, 100);
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";

    cout << endl;
}

int CountNegativeNumbers(int arrSource[100], int arrLength)
{
    int counter = 0;

    for (int i = 0; i < arrLength; i++)
    {
        if (arrSource[i] < 0)
            counter++;
    }
    return counter;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arrLength = 0;

    FillArrayWithRandomNumbers(arr, arrLength);

    cout << "\nArray elements: ";
    PrintArray(arr, arrLength);

    cout << "\nNegative Numbers count is: " << CountNegativeNumbers(arr, arrLength) << endl;
}