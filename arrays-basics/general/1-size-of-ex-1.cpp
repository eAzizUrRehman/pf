#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {0}; // setting all values to 0

    cout << "Size of array in bytes: " << sizeof(arr) << endl;

    // To get the number of elements in the array, you can divide the total size of the array by the size of one element
    cout << "Number of elements in array: " << sizeof(arr) / sizeof(arr[0]) << endl;

    cout << "printing array directly: ";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}