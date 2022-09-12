#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int s, int e)
{
    int pivot = arr[s];
    int count = 0;

    for (int i = s + 1; i < e; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }
    int pivotIndex = s + count;

    swap(arr[pivotIndex], arr[s]);

    int i = s, j = e;

    while (i < pivotIndex && j > pivotIndex)
    {
        /* code */
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j > pivot])
        {
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int s, int e)
{
    if (s >= e)
        return;

    int p = partition(arr, s, e);
    // left
    quickSort(arr, s, p - 1);
    // right
    quickSort(arr, p + 1, e);
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {11, 33, 2, 43, 5, 32, 32, 12, 4, 56, 4, 32, 7, 99, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n);
    quickSort(arr, 0, n - 1);
    printArray(arr, n);
    return 0;
}