#include <iostream>
using namespace std;

void print(int arr[], int s, int e)
{
    for (int i = s; i <= e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool binarySearch(int *arr, int s, int e, int key)
{
    print(arr, s, e);
    if (s > e)
        return false;

    int mid = s + (e - s) / 2;
    if (arr[mid] == key)
    {
        return true;
    }

    if (arr[mid] < key)
    {
        return binarySearch(arr, mid + 1, e, key);
    }
    else
    {
        return binarySearch(arr, s, mid - 1, key);
    }
}

int main()
{
    int arr[] = {2, 3, 4, 5, 6, 7, 9};
    int size = 7;
    int key = 2;
    cout << "Present or not " << binarySearch(arr, 0, 6, key);
    return 0;
}