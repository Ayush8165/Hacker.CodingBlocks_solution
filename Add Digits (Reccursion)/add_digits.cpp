#include <bits/stdc++.h>
using namespace std;

void solve(string digit)
{
    // base case
    if (digit.length() <= 1)
    {
        cout << digit;
        return;
    }

    // converting string to int and summing digits
    int temp = 0;
    for (int i = 0; i < digit.length(); i++)
    {
        int num = digit[i] - '0';
        temp = temp + num;
    }

    // clearing string to store new string
    digit.clear();

    // converting int to string by first getting last digit and pushing in string
    for (int i = 0; temp > 0; i++)
    {
        int num1 = temp % 10;
        char num = num1 + '0';
        digit.push_back(num);
        temp = temp / 10;
    }
    // reversing the string as no store previously was in reverse order
    reverse(digit.begin(), digit.end());

    solve(digit);
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string digit;
    cin >> digit;

    solve(digit);

    return 0;
}