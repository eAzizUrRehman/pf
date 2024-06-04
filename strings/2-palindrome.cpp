#include <iostream>
#include <string>
using namespace std;

string reverseString(string str)
{
    int size = str.length();
    for (int i = 0; i < size / 2; i++)
    {
        // swapping
        char temp = str[i];
        str[i] = str[size - i - 1];
        str[size - i - 1] = temp;
    }
    return str;
}

bool isPalindrome(string str)
{
    string reversed = reverseString(str);
    return str == reversed;
}

int main()
{
    string str1 = "I AM NOT A PALINDROME"; // NO

    cout << "\nI AM NOT A PALINDROME --- Is this a palindrome: " << (isPalindrome(str1) ? "Yes" : "No") << endl;

    string str2 = "MADAM"; // YES

    cout << "\nMADAM --- Is this a palindrome: " << (isPalindrome(str2) ? "Yes" : "No") << endl;

    string str3 = "1234321"; // YES

    cout << "\n1234321 --- Is this a palindrome: " << (isPalindrome(str3) ? "Yes" : "No") << endl;

    string str4 = "123456789"; // NO
    cout << "\n123456789 --- Is this a palindrome: " << (isPalindrome(str4) ? "Yes" : "No") << endl;

    cout << endl;
    cout << endl;
    return 0;
}