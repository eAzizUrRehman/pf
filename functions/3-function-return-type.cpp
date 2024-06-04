#include <iostream>
using namespace std;

// functions having void as return type do not return statements

// function receive params, add them, print them
void noReturnSum(int x, int y)
{
    cout << "$$$$ Sum is " << x + y << endl;
    // cannot have return statement here as the return type of the function is void
}

// function receive params, add them return the value back to the place where it was called
int returnSum(int x, int y)
{
    // the following return can be used ONLY if the return type of the function is NOT void
    return x + y;
}

int main()
{
    noReturnSum(10, 20);

    // directly calling the value-returning function in cout
    cout << "#### Sum is " << returnSum(10, 20) << endl;

    // storing the value returned by the function in a variable
    int returnedValue = returnSum(10, 20);
    cout << "**** Sum is " << returnedValue << endl;

    return 0;
}