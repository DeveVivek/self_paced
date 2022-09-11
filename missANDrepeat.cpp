#include <iostream>
using namespace std;

int find(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[abs(arr[i]) - 1] > 0)
            arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
        else
            cout << abs(arr[i]) << endl;
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] > 0)
            cout << (i + 1) << " ";
    }
}

int main()
{
    int arr[] = {7, 3, 4, 5, 5, 6, 2, 9, 11, 11, 13, 13};
    int n = sizeof(arr) / sizeof(arr[0]);
    find(arr, n);
    return 0;
}
