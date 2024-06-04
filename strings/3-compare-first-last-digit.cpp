// Write a function that takes a non-integer number. It compares the first & last digit, returns true if both digits are equal, otherwise, it is false.

#include <iostream>
#include <string>
using namespace std;

bool compareFirstAndLastDigit(string num)
{
    int lastDigitIndex = num.length() - 1; // finding last digit index

    if (num[0] == num[lastDigitIndex])
        return true;
    else
        return false;
}

int main()
{

    // TEST - 1
    bool num1Compared = compareFirstAndLastDigit("123456789"); // pass 123456789 inside double quotes "" as it is a string, not an integer.

    if (num1Compared)
        cout << "\nFor 123456789 ---> HURRAH!! First and Last digit matched." << endl;
    else
        cout << "\nFor 123456789 ---> OOPPPS!! First and Last digit NOT matched." << endl;

    // TEST - 2
    bool num2Compared = compareFirstAndLastDigit("123451");
    if (num2Compared)
        cout << "\nFor 123451 ------> HURRAH!! First and Last digit matched." << endl;
    else
        cout << "\nFor 123451 ------> OOPPPS!! First and Last digit NOT matched." << endl;

    cout << endl;
    return 0;
}