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

    i = j = 0;
    bool flag = true;
    while (i < a)
    {
        while (flag == true)
        {
            cout << arr[i][j] << ", ";
            if (j == b - 1)
            {
                flag = false;
                break;
            }
            j++;
        }
        i++;
        if (i < a)
        {
            while (flag == false)
            {
                cout << arr[i][j] << ", ";
                if (j == 0)
                {
                    flag = true;
                    break;
                }
                j--;
            }
            i++;
        }
    }
    cout << "END";

    return 0;
}