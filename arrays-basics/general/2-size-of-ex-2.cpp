#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    cout << "printing array in function: ";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // 1-D array

    int noOfElems = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, noOfElems);

    return 0;
}