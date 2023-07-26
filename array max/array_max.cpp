#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    int arr[n];
    int max = INT_MIN;
    while (n--)
    {
        cin >> arr[n];
        if (max <= arr[n])
        {
            max = arr[n];
        }
    }
    cout << max;
    return 0;
}