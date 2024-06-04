#include <iostream>
using namespace std;
/*
FUNCTION SIGNATURE
function signature = return type + function name + parameters

for void sum(int x, int y)
- return type ---------> void
- function name -------> sum
- parameters ----------> int x, int y
*/

// function declaration
// x & y are formal parameters

void sum(int x, int y)
{
    cout << "Sum is " << x + y << endl;
}

int main()
{

    // function call
    // 10 & 20 are actual parameters
    sum(10, 20);
    return 0;
}