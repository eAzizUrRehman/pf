#include <iostream>
using namespace std;

// PROTOTYPE
// prototype means the function is going to be declared later on in this program
// in prototype, parameters can have NO name

// void sum(int, int); // CORRECT
// void sum(int x, int y); // CORRECT

// DECLARATION
void sum(int x, int y)
{
    cout << "Sum is " << x + y << endl;
}

int main()
{
    sum(10, 20);
    return 0;
}