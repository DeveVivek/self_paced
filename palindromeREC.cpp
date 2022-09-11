#include<iostream>
using namespace std;

bool checkPalindrime(string str , int i , int j){
    if(i>j)
        return true;
    if(str[i]!=str[j]){
        return false;
    }else{
        return checkPalindrime(str, i+1 , j-1);
    }
}

int main()
{
    string str = "vivek";
    bool isPalindrome = checkPalindrime(str , 0 , str.length()-1);
    if(isPalindrome){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not a palindrome";
    }
    return 0;
}