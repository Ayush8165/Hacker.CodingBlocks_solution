#include <iostream>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    int odd = 0, even = 0;
    while (n--)
    {
        odd = even = 0;
        int no;
        cin >> no;
        while (no > 0)
        {
            if ((no % 10) % 2 == 0)
            {
                even = even + (no % 10);
            }
            else
            {
                odd = odd + (no % 10);
            }
            no = no / 10;
        }
        if (even % 4 == 0 || odd % 3 == 0)
        {
            cout << "Yes\n";
            // return 0;
        }
        else
        {
            cout << "No\n";
        }
    }

    return 0;
}