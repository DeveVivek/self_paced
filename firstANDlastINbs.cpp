#include <iostream>
using namespace std;

int eleSearch(int arr[], int n, int target)
{
    int first = -1;
    int last = -1;
    for (int i = 0; i < n; i++)
    {
        if (target != arr[i])
            continue;
        if (first == -1)
            first = i;
        last = i;
    }
    if (first != -1)
        cout << "First Occurence " << first << endl
             << "Last occurence " << last;
    else
        cout << "Not Found";
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 4, 3, 5, 6, 3, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 5;
    eleSearch(arr, n, target);
    return 0;
}