#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void arrSum(int arr[3][3], int row, int col)
{
    int maxi = INT_MIN;
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
            maxi = max(maxi, sum);
            cout << sum << " ";
        }
        cout<<endl;
    }
    // return maxi;
    cout << maxi;
}

int main()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    arrSum(arr, 3, 3);
    return 0;
}