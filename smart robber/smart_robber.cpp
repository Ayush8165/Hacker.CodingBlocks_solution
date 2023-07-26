#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int test_case;
    cin >> test_case;
    while (test_case--)
    {
        int size;
        cin >> size;
        int money[size];
        int visited[size] = {-1};
        int j = 0;
        int max = INT_MIN;
        int index = -1;
        for (int i = 0; i < size; i++)
        {
            /* code */
            if (money[i] > max)
            {
                max = money[i];
                index = i;
            }
        }
        visited[j] = index;
        j++;
    }

    return 0;
}