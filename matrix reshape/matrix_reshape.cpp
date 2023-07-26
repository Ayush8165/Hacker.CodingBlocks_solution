#include <iostream>
using namespace std;

int main()
{
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

    int r, c;
    cin >> r >> c;
    if (a * b == r * c)
    {

        i = j = 0;
        int brr[r][c];
        int k, h;
        k = h = 0;
        while (k < r)
        {
            h = 0;
            while (h < c)
            {
                if (j <= b - 2)
                {
                    brr[k][h] = arr[i][j];
                    h++;
                    j++;
                }
                else if (j == b - 1)
                {
                    brr[k][h] = arr[i][j];
                    j = 0;
                    i++;
                    h++;
                }
            }
            k++;
        }

        k = h = 0;
        while (k < r)
        {
            h = 0;
            while (h < c)
            {
                cout << brr[k][h] << " ";
                h++;
            }
            cout << endl;
            k++;
        }
    }

    else
        i = j = 0;
        while (i < a)
        {
            j = 0;
            while (j < b)
            {
                cout << arr[i][j] << " ";
                j++;
            }
            cout << endl;
            i++;
        }
    {

    }

    return 0;
}