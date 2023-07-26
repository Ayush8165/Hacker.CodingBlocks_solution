#include <iostream>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, i = 0;
    cin >> n;
    int arr[n];
    while (i < n)
    {
        cin >> arr[i];
        i++;
    }

    int target;
    cin >> target;
    if (target > arr[n / 2])
    {
        i = n / 2;
        i++;
        while (i < n)
        {
            if (arr[i] == target)
            {
                cout << i;
                return 0;
            }
            i++;
        }
        cout<<"-1";
    }
    else if (target < arr[n / 2])
    {
        i = 0;
        while (i < n/2)
        {
            if (arr[i] == target)
            {
                cout << i;
                return 0;
            }
            i++;
        }
        cout<<"-1";
    }
    else if (target == arr[n / 2])
    {
        cout << n / 2;
        return 0;
    }

    return 0;
}