#include <bits/stdc++.h>
using namespace std;

void targetsearch(int arr[], int n, int target)
{
    int sum;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                sum = arr[i] + arr[j] + arr[k];
                if (sum > target)
                {
                    break;
                }
                if (sum == target)
                {
                    cout << arr[i] << ", " << arr[j] << " and " << arr[k] << endl;
                    // break;
                }
            }
        }
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    int arr[n];

    // Input Array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr + 0, arr + n);
    int target;
    cin >> target;
    targetsearch(arr, n, target);

    return 0;
}