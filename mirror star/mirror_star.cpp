#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    m = n / 2 + 2;
    int i, j;
    i = j = 1;
    while (i <= m)
    {
        j = 2;
        while (j <= m)
        {
            if (j <= m + 1 - i)
            {
                cout << "   ";
            }
            else
            {
                cout << "*  ";
            }
            j++;
        }
        j = m - 1;
        while (j >= 1)
        {
            if (j <= m + 1 - i)
            {
                cout << "   ";
            }
            else
            {
                cout << "*  ";
            }
            j--;
        }
        cout << endl;
        i++;
    }
    i = m - 1;
    while (i >= 1)
    {
        j = 2;
        while (j <= m)
        {
            if (j <= m + 1 - i)
            {
                cout << "   ";
            }
            else
            {
                cout << "*  ";
            }
            j++;
        }
        j = m - 1;
        while (j >= 1)
        {
            if (j <= m + 1 - i)
            {
                cout << "   ";
            }
            else
            {
                cout << "*  ";
            }
            j--;
        }
        cout << endl;
        i--;
    }

    return 0;
}