#include <iostream>
using namespace std;

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

    printArray(arr);

    return 0;
}