#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int prefix[n];
    prefix[0] = 1;
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] * arr[i - 1];
    }

    int suffix[n];
    suffix[n - 1] = 1;
    for (int i = 1; i < n; i++)
    {
        suffix[n - i - 1] = suffix[n - i] * arr[n - i];
    }
    for (int i = 0; i < n; i++)
    {
        suffix[i] = suffix[i] * prefix[i];
    }

    print(suffix, n);

    return 0;
}