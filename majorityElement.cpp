#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void major(int arr[], int n)
{
    int maxCount = 0;
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        if (count > maxCount)
        {
            maxCount = count;
            index = i;
        }
    }
    if (maxCount > n / 2)
    {
        cout << arr[index] << endl;
    }
    else
    {
        cout << "No majority element";
    }
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
    int arr[] = {1, 1, 2, 1, 3, 5, 1, 1, 1, 1, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n);
    major(arr, n);
    return 0;
}