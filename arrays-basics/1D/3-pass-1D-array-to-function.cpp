#include <iostream>
using namespace std;

// while receiving the array, you need []

// void printArray(int arr[10]) //CORRECT
// void printArray(int arr[]) //CORRECT
// void printArray(int arr) // WRONG

// here we RECEIVE the array as a FORMAL parameter
void printArray(int arr[])
{
    cout << "printing array in function: ";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // 1-D array

    // here we PASS the array as a ACTUAL parameter
    printArray(arr);

    // printArray(arr); // CORRECT
    // printArray(arr[]); // WRONG 
    return 0;
}