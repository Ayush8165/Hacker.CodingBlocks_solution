#include <bits/stdc++.h>
using namespace std;

string convert(int num)
{
    string result;
    if (num == 0)
    {
        result = "0";
        return result;
    }
    while (num > 0)
    {
        int digit = num % 10;
        result.push_back(digit + '0');
        num = num / 10;
    }
    reverse(result.begin(), result.end());
    return result;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int num;
    cin >> num;
    string numbers[num + 1];

    for (int i = 0; i < num + 1; i++)
    {
        int temp = num - i;
        numbers[i] = convert(temp);
        cout << numbers[i] << " ";
    }

    return 0;
}