#include <iostream>
using namespace std;

enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };

enPrimeNotPrime CheckPrime(int Number)
{
    int M = round(Number / 2);

    for (int Counter = 2; Counter <= M; Counter++)
    {

        if (Number % Counter == 0)
            return enPrimeNotPrime::NotPrime;

    }

    return enPrimeNotPrime::Prime;
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

void CopyOnlyPrimeNumbers(int arrSource[100], int arrDestination[100], int NumberOfElements , int &arr2Length)
{
    short counter = 0;

    for (int i = 0; i < NumberOfElements; i++)
    {
        if (CheckPrime(arrSource[i]) == enPrimeNotPrime::Prime)
        {
            arrDestination[counter] = arrSource[i];
            counter++;
        }
    }
    arr2Length = counter;
}


int main()
{
    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength = ReadPositiveNumber("Enter Number of elements:");


    FillArrayWithRandomNumbers(arr, arrLength);

    int PrimeArr[100] ,arr2Length = 0;
    CopyOnlyPrimeNumbers(arr, PrimeArr, arrLength , arr2Length);

    cout << "\nArray 1 elements:\n";
    PrintArray(arr, arrLength);

    cout << "\nPrime Numbers in Array 2:\n";
    PrintArray(PrimeArr,arr2Length);
}