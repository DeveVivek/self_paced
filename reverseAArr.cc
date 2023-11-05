#include <iostream>
using namespace std;

void reverse(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {12, 3, 4, 3, 4, 2, 4, 2, 43, 2, 3, 34, 24, 34, 23, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, size);
    reverse(arr, 0, size - 1);
    printArray(arr, size);
    return 0;
}