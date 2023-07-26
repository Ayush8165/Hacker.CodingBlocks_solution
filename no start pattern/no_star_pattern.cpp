#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i, j;
    i = 1;
    while (i <= n)
    {
        j = 1;
        while (j <= n - i + 1)
        {
            cout << j<<" ";
            j++;
        }
        j = 1;
        while (j <= 1 + (i - 2) * 2 and i > 1)
        {
            cout << "* ";
            j++;
        }

        cout << endl;
        i++;
    }

    return 0;
}