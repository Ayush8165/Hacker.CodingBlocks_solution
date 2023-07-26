#include <iostream>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    int arr[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i == 1)
        {
            if (arr[i - 1] == arr[i] && arr[i] == 0)
            {
                arr[i - 1] = 1;
                count++;
            }
        }
        if (i == n - 1)
        {
            if (arr[i] == arr[i - 1] && arr[i] == 0)
            {
                arr[i] = 1;
                count++;
            }
        }
        else if (i > 1)
        {
            if (arr[i - 2] == arr[i - 1] && arr[i - 1] == arr[i] && arr[i] == 0)
            {
                arr[i - 1] = 1;
                count++;
            }
        }
    }

    int k;
    cin >> k;
    if (k <= count)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }

    return 0;
}