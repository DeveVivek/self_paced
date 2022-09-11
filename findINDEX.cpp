#include <iostream>
using namespace std;

int search(int arr[], int start, int end, int target)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] ==target)
            return mid;
        if(arr[mid]>target)
            return search(arr, start , mid -1, target);
        return search(arr, mid +1, end, target);
    }
    return -1;
}
int findPos(int arr[], int key){
    int start = 0;
    int h = 1;
    int val = arr[0];
    while(val<key){
        start = h ;
        h = 2*h;
        val = arr[h];
    }
    return search(arr, start , h , key);
}

int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int ans = findPos(arr, 1);
    if(ans == -1)
        cout<<"Not Found";
    else
        cout<<"Found";
    return 0;
}