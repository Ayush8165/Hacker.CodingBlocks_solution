#include <iostream>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    char book[n];
    for (int i = 0; i < n; i++)
    {
        cin >> book[i];
    }

    bool flag = true;
    while (flag == true)
    {
        flag = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (book[i] == 'M')
            {
                if (book[i + 1] == 'P' or book[i + 1] == 'C')
                {
                    char temp = book[i];
                    book[i] = book[i + 1];
                    book[i + 1] = temp;
                    flag = true;
                }
            }
            else if (book[i] == 'C')
            {
                if (book[i + 1] == 'P')
                {
                    char temp = book[i];
                    book[i] = book[i + 1];
                    book[i + 1] = temp;
                    flag = true;
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << book[i] << " ";
    }

    return 0;
}