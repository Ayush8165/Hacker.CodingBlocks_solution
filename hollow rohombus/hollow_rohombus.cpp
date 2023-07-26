#include <iostream>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    int i, j;
    i = j = 1;
    while (i <= n)
    {
        j = 1;
        while (j <= n)
        {
            if (i == n)
            {
                cout << "*";
            }
            else if (j == n - i + 1)
            {
                cout << "*";
            }
            else if (j != n - i + 1)
            {
                cout << " ";
            }
            j++;
        }
        j =1;
        while (j < n)
        {
            if (i == 1)
            {
                cout << "*";
            }
            else if (j == n - i)
            {
                cout << "*";
                break;
            }
            else if (j != n - i + 1)
            {
                cout << " ";
            }
            j++;
        }

        cout << endl;
        i++;
    }

    return 0;
}