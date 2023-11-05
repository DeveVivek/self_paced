#include <iostream>
using namespace std;

int uniqueOccur(int arr[], int n, int x)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (x == arr[i])
        {
            res++;
        }
    }
    return res;
}

int main()
{
    int arr[8] = {1, 2, 3, 3, 34, 2, 3, 3};
    cout << uniqueOccur(arr, 8, 2) << endl;
    return 0;
}