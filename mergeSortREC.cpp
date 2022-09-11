#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int k = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[k++];
    }
    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[k++];
    }

    int index1 = 0;
    int index2 = 0;
    k = s;

    while (index1 < len1 && index2 < len2)
    {
        /* code */
        if(first[index1] < second[index2]){
            arr[k++]=first[index1++];
        }
        else{
            arr[k++] = second[index2++];
        }
    }
    while(index1<len1){
        arr[k++] = first[index1++];
    }
    while(index2<len2){
        arr[k++] = second[index2++];
    }
}


void mergeSort(int *arr , int s , int e){
    if(s>=e){
        return;
    }
    int mid = (s+e)/2;

    mergeSort(arr, s , mid);

    mergeSort(arr, mid +1 , e);

    merge(arr,s , e);
}

void printArray(int *arr , int n){
    for(int i = 0 ; i < n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main()
{
    int arr[]= {12,4,53,5,23,5,3,24,53,2,4,3,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    printArray(arr, n);  
    mergeSort(arr , 0 , n-1);
    printArray(arr , n);
    return 0;
}