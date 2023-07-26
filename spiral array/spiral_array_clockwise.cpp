#include <iostream>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int a, b;
    cin >> a >> b;
    int arr[a][b];
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
    int count = 0;
    int flagi = 0, flagj = 0;
    int c = a, d = b;
    while (true)
    {
        while (j < b)
        {
            cout << arr[i][j] << ", ";
            count++;
            j++;
        }
        j--;
        i++;
        flagi++;

        if (count == c * d)
        {
            cout << "END";
            return 0;
        }

        while (i < a)
        {
            cout << arr[i][j] << ", ";
            count++;
            i++;
        }
        i--;
        j--;
        b--;

        if (count == c * d)
        {
            cout << "END";
            return 0;
        }

        while (j >= flagj)
        {
            cout << arr[i][j] << ", ";
            count++;
            j--;
        }
        j++;
        i--;
        a--;

        if (count == c * d)
        {
            cout << "END";
            return 0;
        }

        while (i >= flagi)
        {
            cout << arr[i][j] << ", ";
            count++;
            i--;
        }
        i++;
        j++;
        flagj++;

        if (count == c * d)
        {
            cout << "END";
            return 0;
        }
    }
    return 0;
}