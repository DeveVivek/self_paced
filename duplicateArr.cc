#include <iostream>
using namespace std;

int duplicate(int arr[], int bot, int top)
{
    int flag = 0;
    if (bot == top)
        return 0;
    else
    {
        int mid = bot + (top - bot) / 2;
        int n = duplicate(arr, bot, mid) + duplicate(arr, mid + 1, top);
        if (arr[mid] == arr[mid - 1])
        {
            flag == arr[mid - 1];
            if (flag != mid)
                n++;
        }
        return n;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 3, 3, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int out = duplicate(arr, 0, size);
    cout << out << endl;
    return 0;
}