#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1; // line counter
    int m = 1; // print counter
    int k;     // printer
    while (i <= n)
    {
        k = 1;
        while (k <= n)
        {
            if (k <= m)
            {
                cout << k << "  ";
            }
            else
            {
                cout << "   ";
            }
            k++;
        }
        k = k - 2;
        while (k > 0)
        {
            if (k > i)
            {
                cout << "   ";
            }
            else
            {
                cout << k << "  ";
            }
            k--;
        }
        cout << endl;
        i++;
        m++;
    }

    return 0;
}