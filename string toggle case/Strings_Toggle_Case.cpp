#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string input;
    cin >> input;

    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] + 1 > 65 && input[i] + 1 < 97)
        {
            // uppercase word
            input[i] = input[i] + 32;
        }
        else
        {
            // lower case
            input[i] = input[i] - 32;
        }
    }

    cout << input;

    return 0;
}