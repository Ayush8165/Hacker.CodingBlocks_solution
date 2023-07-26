#include <iostream>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    int i = 0, j = 0;
    int arr[n][n];
    while (i < n)
    {
        j = 0;
        while (j < n)
        {
            cin >> arr[i][j];
            j++;
        }
        i++;
    }
    j = n - 1;

    while (j >= 0)
    {
        i = 0;
        while (i < n)
        {
            cout << arr[i][j] << " ";
            i++;
        }
        cout << endl;
        j--;
    }

    return 0;
}