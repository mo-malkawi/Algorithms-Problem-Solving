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
        arr[i] = RandomNumber(1, 100);
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";

    cout << endl;
}

int CountEvenNumbers(int arrSource[100], int arrLength)
{
    int counter = 0;

    for (int i = 0; i < arrLength; i++)
    {
        if (CheckNumberType(arrSource[i]) == enNumberType::Even)
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

    cout << "\nEven Numbers count is: " << CountEvenNumbers(arr, arrLength) << endl;
}