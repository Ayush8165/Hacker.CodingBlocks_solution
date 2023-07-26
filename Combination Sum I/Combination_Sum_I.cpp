#include <bits/stdc++.h>
using namespace std;

void solve(int coin[], int target, int n, int sum, int &count, int idx)
{
    // base case
    if (sum >= target)
    {
        if (sum == target)
        {
            count = count + 1;
        }
        return;
    }

    for (int i = idx; i < n; i++)
    {
        sum = sum + coin[i];
        solve(coin, target, n, sum, count, i);
        sum -= coin[i];
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, target;
    cin >> n >> target;

    int coin[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> coin[i];
    }
    int count = 0;
    solve(coin, target, n, 0, count, 0);
    cout << count << endl;

    return 0;
}