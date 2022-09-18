#include <iostream>
using namespace std;

int finDup(int arr[], int bot, int top)
{
    int flag = 0;
    if (bot == top)
        return 0;
    else
    {
        int mid = bot + (top - bot) / 2;
        int n = finDup(arr, bot, mid) + finDup(arr, mid + 1, top);
        if (arr[mid] == arr[mid - 1])
        {
            flag == arr[mid - 1];
            if (flag != arr[mid])
                n++;
        }
        return n;
    }
}

int main()
{
    int arr[] = {1, 2, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int out = finDup(arr, 0, size);
    cout << out << " ";
    return 0;
}
