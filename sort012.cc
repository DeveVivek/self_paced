#include <iostream>
using namespace std;

void sort012(int arr[], int n)
{
    int i, temp, next0 = 0, next2 = n - 1;
    for (i = 0; i <= next2;)
    {
        /* code */
        if (arr[i] == 2)
        {
            temp = arr[i];
            arr[i] = arr[next2];
            arr[next2] = temp;
            next2--;
        }
        else if (arr[i] == 0)
        {
            temp = arr[i];
            arr[i] = arr[next0];
            arr[next0] = temp;
            next0++;
            i++;
        }
        else
        {
            i++;
        }
    }
}

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    
}

int main()
{
    int arr[]= {1,0,1,1,2,2,2,2,0,0,0,0,0,0,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort012(arr, n);
    printArray(arr, n);
    return 0;
}