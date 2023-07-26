#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string s;
    cin >> s;

    cout << s[0];
    int count = 1;
    for (int i = 1; i < s.length(); i++)
    {
        /* code */
        if (s[i] == s[i - 1])
        {
            count++;
        }
        else
        {
            if (count != 1)
            {
                cout << count;
            }
            count = 1;
            cout << s[i];
        }
    }
    if (count != 1)
    {
        cout << count;
    }

    return 0;
}