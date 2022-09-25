#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int n, int target)
{
    int start = 0;
    int end = n - 1;
    int count = 0;
    int mid = start + (end - start) / 2;
    for (int i = 0; i < n; i++)
    {
        if (target != arr[i])
            continue;
        if (target == arr[i])
            ;
        count++;
    }
    return count;
}

int main()
{
    int arr[] = {1, 23, 4, 2, 2, 4, 35, 34, 32, 2, 4, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 4;
    cout << search(arr, n, target);
    return 0;
}