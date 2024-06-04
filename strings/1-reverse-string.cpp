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

int main()
{
    string str = "I WILL GET REVERSED";

    cout << "Original string: " << str << endl;

    string reversed = reverseString(str);

    cout << "Reversed string: " << reversed << endl;
    return 0;
}