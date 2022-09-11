#include <iostream>
using namespace std;

bool checkPalindrime(string str, int i, int n)
{
    if (i > n-1-i)
        return true;
    if (str[i] != str[n-1])
    {
        return false;
    }
    else
    {
        return checkPalindrime(str, i + 1, n-1-i);
    }
}

int main()
{
    string str = "nnn";
    int n = str.length();
    bool isPalindrome = checkPalindrime(str, 0, n);
    if (isPalindrome)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not a palindrome";
    }
    return 0;
}