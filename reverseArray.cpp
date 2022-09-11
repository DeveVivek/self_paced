#include<iostream>
using namespace std;

void reverseArray(int arr[], int start, int end){
        while (start<end)
        {
            /* code */
            int temp = arr[start];
            arr[start]=arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }
void printArray(int arr[], int n){
    for(int i = 0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[]={2,34,64,64,33,21};
    int n = sizeof(arr)/sizeof(arr[0]);
    printArray(arr,n);
    reverseArray(arr, 0, n-1);
    cout<<"Reversed array is "<<endl;
    printArray(arr, n );
    return 0;
}