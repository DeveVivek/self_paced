#include<iostream>
using namespace std;

void rotateArray(int arr[], int d , int n ){
    int temp[n];
    int k = 0;
    for(int i =d ; i<n ; i++){
        temp[k]=arr[i];
        k++;
    }
    for(int i = 0; i<d; i++){
        temp[k]= arr[i];
        k++;
    }
    for(int i = 0; i<n; i++){
        arr[i] = temp[i];
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
    int arr[]= {21,32,43,54,33,65,34,53};
    int n = sizeof(arr)/sizeof(arr[0]);
    printArray(arr, n);
    rotateArray(arr, 3, n);
    cout<<"Rotated array is "<<endl;
    printArray(arr,n);
    return 0;
}