#include <bits/stdc++.h>
using namespace std;

bool check_palindromic_substring(string substring)
{
    /* code */
    for (int i = 0, j = substring.length() - 1; i <= j; i++, j--)
    {
        if (substring[i] != substring[j])
        {
            return false;
        }
    }
    return true;
}

int substring_generator(string word)
{
    /*Code*/
    int count = 0;
    // Outer loop to decide starting point
    for (int i = 0; i < word.length(); i++)
    {
        string substring;
        for (int j = i; j < word.length(); j++)
        {
            substring = substring + word[j];
            if (check_palindromic_substring(substring))
            {
                count++;
            }
            // cout << substring << endl;
        }
    }
    return count;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string word;
    cin >> word;

    cout << substring_generator(word);

    return 0;
}