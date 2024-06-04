#include <iostream>
using namespace std;

// void printArray(int arr[10][5])//CORRECT
// void printArray(int arr[][]) //WRONG
// size is mandatory to be specified here

// here we receive the array as a FORMAL parameter
void printArray(int arr[10][5])
{
    cout << "printing array in function: " << endl;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[10][5] =
        {
            {1, 2, 3, 4, 5},
            {6, 7, 8, 9, 10}};

    // here we PASS the array as a ACTUAL parameter
    printArray(arr);

    // printArray(arr); // CORRECT
    // printArray(arr[][]); // WRONG
    // printArray(arr[10][5]); // WRONG
    return 0;
}