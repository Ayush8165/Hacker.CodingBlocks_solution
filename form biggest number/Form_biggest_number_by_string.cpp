#include <bits/stdc++.h>
using namespace std;

bool compare(string s, string t)
{
    return s + t > t + s;
}

void Solve()
{
    int n;
    cin >> n;
    string s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    sort(s, s + n, compare);

    for (int i = 0; i < n; i++)
    {
        cout << s[i];
    }

    cout << endl;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int test_case;
    cin >> test_case;

    while (test_case--)
    {
        Solve();
    }

    return 0;
}