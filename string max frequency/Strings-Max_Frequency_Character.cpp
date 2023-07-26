#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string word;
    cin >> word;
    char max = NULL;
    for (int i = 0; i < word.length(); i++)
    {
        /* code */
        if (word[i] >= max)
        {
            max = word[i];
        }
    }

    int temp = max - 'a';
    int freq[temp + 1] = {0};
    int max_freq = INT_MIN;
    int index;
    for (int i = 0; i < word.length(); i++)
    {
        /* code */
        int temp = word[i] - 'a';
        freq[temp]++;
        if (freq[temp] >= max_freq)
        {
            max_freq = freq[temp];
            index = temp;
        }
    }

    cout << char(index + 'a');

    return 0;
}