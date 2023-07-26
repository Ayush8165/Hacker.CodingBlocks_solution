#include <bits/stdc++.h>
using namespace std;

bool check_sorted(int arr[], int n, int index, bool check)
{
    // base case
    if (index == n - 1)
    {
        return true;
    }

    if (arr[index] <= arr[index + 1])
    {
        check = check_sorted(arr, n, index + 1, check);
    }
    else
    {
        return false;
    }

    return check;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    int arr[n] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (check_sorted(arr, n, 0, false))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }

    return 0;
}