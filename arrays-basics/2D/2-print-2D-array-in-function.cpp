#include <iostream>
using namespace std;

void printArray(int arr[10][5])
{
    cout << "printing array in function: "<<endl;

    // same 2 loops
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
    // create a 2-D array
    int arr[10][5] =
        {
            {1, 2, 3, 4, 5},
            {6, 7, 8, 9, 10}};

    printArray(arr);

    return 0;
}