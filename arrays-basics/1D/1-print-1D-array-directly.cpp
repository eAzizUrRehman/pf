#include <iostream>
using namespace std;

int main()
{
    // create a 1-D array

    // inside [], you can specify size of array i.e   int arr[10] = {1,2,3,4,5,6,7,8,9,10}
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "printing array directly: ";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}