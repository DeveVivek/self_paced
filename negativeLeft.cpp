#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void arrange(int arr[], int n ){
    int j = 0;
    for(int i = 0; i<n ; i++){
        if(arr[i]<0){
            if(i!=j){
                swap(arr[i],arr[j]);
                j++;
            }
        }
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
    int arr[]={12, -32, -12, 15, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    printArray(arr, n);
    arrange(arr, n);
    printArray(arr, n);
    return 0;
}