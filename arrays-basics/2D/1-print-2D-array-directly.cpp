#include <iostream>
using namespace std;

int main()
{
    // create a 2-D array

    // you can declare 1-D array without specifying size but for 2-D array, you will need to provide size

    // WRONG
    // int arr[][] =
    //     {
    //         {1, 2, 3, 4, 5},
    //         {6, 7, 8, 9, 10}};

    // CORRECT
    // ROWS & COLS SIZE
    int arr[10][5] =
        {
            {1, 2, 3, 4, 5},
            {6, 7, 8, 9, 10}};

    // 1D array require a single loop upto SIZE
    // 2D array require 2 loops
    // Outer loop is upto no of rows
    // Inner loop is upto no of cols

    cout << "printing array directly: " << endl;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // analyze the printed resulted, those values not initialized are 0
    //  1 2 3 4 5
    //  6 7 8 9 10
    //  0 0 0 0 0
    //  0 0 0 0 0
    //  0 0 0 0 0
    //  0 0 0 0 0
    //  0 0 0 0 0
    //  0 0 0 0 0
    //  0 0 0 0 0
    //  0 0 0 0 0

    return 0;
}