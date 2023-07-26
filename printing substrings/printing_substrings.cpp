#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string word;
    cin >> word;

    for (int i = 0; i < word.length(); i++)
    {
        /* code */
        string sub;
        for (int j = i; j < word.length(); j++)
        {
            sub = sub + word[j];
            cout << sub << endl;
        }
    }

    return 0;
}