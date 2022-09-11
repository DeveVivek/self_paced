#include<iostream>
using namespace std;

int binarySearch(int arr[], int n , int target){
    int start= 0; int end = n-1;
    int mid = start + (end - start)/2;

    while(start<=end){
        int midElement = arr[mid];
        if(midElement == target){
            return true;
        }
        if(midElement> target){
            end = mid -1;
        }
        else{
            start = mid +1;
        }
    mid = start + (end -start)/2;
    }
    return false;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 5;
    if(binarySearch(arr, n , target)){
        cout<<"Element Found";
    }
    else{
        cout<<"Element not found";
    }
    return 0;
}