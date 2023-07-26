#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string sample;
    cin >> sample;
    cout << sample[0];
    for (int i = 1; i < sample.length(); i++)
    {
        if (sample[i] != sample[i - 1])
        {
            cout << sample[i];
        }
    }

    return 0;
}