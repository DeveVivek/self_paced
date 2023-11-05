#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << arr[i] << " ";
    }
    cout << endl;
}
void swapAlternate(int arr[], int size)
{
    for (int i = 0; i < size; i=i+2)
    {
        /* code */
        if (i + 1 < size)
            swap(arr[i], arr[i + 1]);
    }
}

int main()
{
    int even[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int odd[7] = {23, 34, 23, 234, 2, 24, 2};
    swapAlternate(even, 8);
    printArray(even, 8);
    cout << endl;
    swapAlternate(odd, 7);
    printArray(odd, 7);
    cout << endl;
    return 0;
}