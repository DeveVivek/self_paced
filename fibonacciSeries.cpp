#include <iostream>
using namespace std;

void printFiboancci(int n)
{
    int a = 0;
    int b = 1;
    for (int i = 0; i < n - 2; i++)
    {
        int sum = a + b;
        cout << sum << " ";
        a = b;
        b = sum;
    }
}

int main()
{
    int n;
    cout << "Enter the value" << endl;
    cin >> n;
    printFiboancci(n);
    return 0;
}