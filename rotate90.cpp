#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void rotateX(int arr[3][3] , int n, int m){
    int i , j;
    for( i = 0 ;i<n ;i++){
        for( j = 0; j<i ; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }
}
void rotateY(int arr[3][3] , int n, int m){
    int i , j;
    for( i = 0 ;i<n ;i++){
        for( j = 0; j<i ; j++){
            swap(arr[j][i], arr[i][j]);
        }
    }
}
void printArray(int arr[3][3]){
    for(int i = 0; i<3;i++){
        for(int j = 0; j<3 ;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

int main()
{
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    int n = 3;
    printArray(arr);
    rotateX(arr,3,3);
    printArray(arr);
    rotateY(arr,3,3);
    printArray(arr);
    return 0;
}