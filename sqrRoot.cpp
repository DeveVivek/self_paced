#include <iostream>
using namespace std;

int square(int n)
{
    int count = 0;
    for (int i = 1; i * i < n; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    cout << square(n);
    return 0;
}