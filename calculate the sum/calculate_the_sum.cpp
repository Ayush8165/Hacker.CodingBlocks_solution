#include <bits/stdc++.h>
using namespace std;

void rotate(int arr[], int n, int shift)
{
    int temp;
    while (shift--)
    {
        temp = arr[0];
        for (int i = 0; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = temp;
    }
}

void add(int org[], int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] + org[i];
        org[i] = arr[i];
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    int arr[n], org[n];

    // Input Array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        org[i] = arr[i];
    }

    int operation, shift;
    cin >> operation;
    while (operation--)
    {
        cin >> shift;
        rotate(arr, n, shift);
        add(org, arr, n);
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    cout << sum;

    return 0;
}