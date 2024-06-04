#include <iostream>
using namespace std;

void add10toNum(int num1, int &num2)
{
    num1 = num1 + 10; // This will NOT affect the original num1
    num2 = num2 + 10; // This will affect the original num2

    // inside this function num1 = 15 and num2 = 15
    // but inside main, where this function was called, num1 = 5 and num2 = 25
    // this is because num1 is passed by value and num2 is passed by reference
    // so any changes made to num2 inside this function will affect the original num2
    // but any changes made to num1 inside this function will NOT affect the original num1
}

int main()
{
    int num1 = 5;
    int num2 = 5;

    add10toNum(num1, num2);

    cout << "Num1: " << num1 << endl; // Outputs: Num1: 5
    cout << "Num2: " << num2 << endl; // Outputs: Num2: 25

    return 0;
}