#include <bits/stdc++.h>
using namespace std;

void check_palindrome(string s)
{
    for (int i = 0, j = s.length() - 1; i < j; i++, j--)
    {
        if (s[i] != s[j])
        {
            cout << "false";
            return;
        }
    }
    cout << "true";
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string s;
    cin >> s;
    check_palindrome(s);

    return 0;
}