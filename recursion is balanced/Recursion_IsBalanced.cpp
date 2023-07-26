#include <bits/stdc++.h>
using namespace std;

bool bracket_check(char ch)
{
    string brack = "{([])}";
    for (int i = 0; i < brack.length(); i++)
    {
        /* code */
        if (ch == brack[i])
        {
            return true;
        }
    }
    return false;
}

bool is_balanced(string only_brackets, int i, int j)
{
    int temp1 = only_brackets[i] + 0;
    int temp2 = only_brackets[j] + 0;

    if (temp1 == (temp2 - 1) or temp1 == (temp2 - 2))
    {
        if (i != j - 1)
        {
            bool flag = is_balanced(only_brackets, i + 1, j - 1);
            return flag;
        }
        else
        {
            return true;
        }
    }
    else
    {
        return false;
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string word, only_brackets;
    cin >> word;

    for (int i = 0; i < word.length(); i++)
    {
        char temp = word[i];
        if (bracket_check(word[i]))
        {
            only_brackets = only_brackets + temp;
        }
    }
    // cout << only_brackets << endl;

    bool answer = is_balanced(only_brackets, 0, only_brackets.length() - 1);

    if (answer)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}