#include <bits/stdc++.h>
using namespace std;

void solve(string &to_work_on, string input, int index)
{
    // base case
    if (index == to_work_on.length() - 1)
    {
        int comp = to_work_on.compare(input);
        if (comp < 0)
        {
            cout << to_work_on << endl;
        }
        return;
    }

    for (int i = index; i < input.length(); i++)
    {
        swap(to_work_on[i], to_work_on[index]);
        solve(to_work_on, input, index + 1);
        swap(to_work_on[i], to_work_on[index]);
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string input;
    cin >> input;
    string to_work_on = input;

    sort(to_work_on.begin(), to_work_on.end());
    // cout << to_work_on;

    solve(to_work_on, input, 0);

    return 0;
}