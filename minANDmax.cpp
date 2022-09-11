#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int getMaxFromAnArray(int arr[], int n){
    int ans = INT_MIN;
    for(int i = 0; i<n ; i++){
        ans = max(ans , arr[i]);
    }
    cout<<ans<<endl;
    return ans;
}
int getMinFromAnArray(int arr[], int n){
    int ans = INT_MAX;
    for(int i = 0; i<n ; i++){
        ans = min(ans , arr[i]);
    }
    cout<<ans<<endl;
    return ans;
}
void printArray(int arr[], int n){
    for(int i = 0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int main()
{
    int arr[]= {12,45,343,23,2322,434,22,44};
    int n = sizeof(arr)/sizeof(arr[0]);
    printArray(arr,n);
    getMinFromAnArray(arr, n);
    getMaxFromAnArray(arr, n);
    return 0;
}