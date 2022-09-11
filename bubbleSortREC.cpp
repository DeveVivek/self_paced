#include <iostream>
// #include<bits/stdc++.h>
using namespace std;
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int arr[], int n)
{
    if (n == 0 || n == 1)
        return;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            swap(arr[i], arr[i + 1]);
    }
    bubbleSort(arr, n - 1);
}
int main()
{
    int arr[] = {2, 4, 63, 632, 23, 64, 753, 23, 2, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n);
    bubbleSort(arr, n);
    printArray(arr, n);
    return 0;
}
