#include <bits/stdc++.h>
using namespace std;

void spaces(int n)
{
    for (int i = 0; i < (n / 2) - 1; i++)
    {
        cout << " ";
    }
}

void stars(int n)
{
    for (int i = 0; i <= (n / 2); i++)
    {
        cout << "*";
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        // UPPER PART
        if (i <= n / 2)
        {
            // TOP LEFT
            if (i == 0)
            {
                cout << "*";
                spaces(n);
                stars(n);
                cout << endl;
            }
            else if (i == n / 2)
            {
                stars(n);
                stars(n - 2);
                cout << endl;
            }
            else
            {
                cout << "*";
                spaces(n);
                cout << "*" << endl;
            }
        }

        // LOWER PART
        if (i > n / 2)
        {
            if (i == n - 1)
            {
                stars(n);
                spaces(n);
                cout << "*";
                cout << endl;
            }
            else
            {
                spaces(n + 2);
                cout << "*";
                spaces(n);
                cout << "*" << endl;
            }
        }
    }

    return 0;
}