#include <iostream>
using namespace std;

int RandomNumber(int From, int To)
{
    int RandNum = rand() % (To - From + 1) + From;
    return RandNum;
}

void FillArrayWithRandomNumbers(int arr[100], int &arrlength)
{
    cout << "Enter Number of elements:\n";
        cin >> arrlength;

    for (int i = 0; i < arrlength; i++)
        arr[i] = RandomNumber(1,100);
}

void PrintArray(int arr[100], int NumberOfElements)
{
    cout << "\nArray Elements : ";
    for (int i = 0; i < NumberOfElements; i++)
        cout << arr[i] << " ";

    cout << endl;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arrLength = 0 ;
    

    FillArrayWithRandomNumbers(arr , arrLength);
    PrintArray(arr, arrLength);


}
