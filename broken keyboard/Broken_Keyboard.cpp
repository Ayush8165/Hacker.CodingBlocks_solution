#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string s1, s2;
    cin >> s1 >> s2;

    string final;

    final = final + s2[0];
    for (int i = 1; i < s2.length(); i++)
    {
        /* code */
        if (s2[i] == s2[i - 1])
        {
            continue;
        }
        else
        {
            final = final + s2[i];
        }
    }
    // cout << final;
    int check = final.compare(s1);
    if (check == 0)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }

    return 0;
}