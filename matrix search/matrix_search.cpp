#include <iostream>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int a, b;
    cin >> a >> b;
    int arr[a][b];
    int i, j;
    i = j = 0;
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

    int element;
    cin >> element;
    i = j = 0;
    while (i < a)
    {
        j = 0;
        while (j < b)
        {
            if (arr[i][j] == element)
            {
                cout << "1";
                return 0;
            }
            j++;
        }
        i++;
    }
    cout << "0";
}