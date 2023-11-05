#include<iostream>
using namespace std;

int findUnique(int* arr , int size){
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        /* code */
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int arr[7] = {1,1,2,3,3,4,4} ;
    findUnique(arr, 7);
    cout<<findUnique<<endl;
    return 0;
}