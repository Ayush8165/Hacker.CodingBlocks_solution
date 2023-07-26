#include <iostream>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int a, b, k, s;
    cin >> a >> b >> k >> s;
    char arr[a][b];
    int i = 0, j = 0;
    while (i < a)
    {
        j = 0;
        while (j < b)
        {
            cin >> arr[i][j];
            j++;
        }
        i++;
    }

    i = j = 0;

    while (i < a)
    {
        j = 0;
        while (j < b)
        {
            if (arr[i][j] == '.')
            {
                s = s - 2;
                j++;
                s--;
                // cout << s << " ";
            }
            else if (arr[i][j] == '*')
            {
                s = s + 5;
                j++;
                s--;
                // cout << s << " ";
            }
            else if (arr[i][j] == '#')
            {
                // cout << s << " ";
                break;
            }
            if (j == b)
            {
                s++;
            }
            if (s < k)
            {
                cout << "No";
                return 0;
            }
        }
        i++;
    }

    if (s > k)
    {
        cout << "Yes\n"
             << s;
    }
    else
    {
        cout << "No";
    }

    return 0;
}