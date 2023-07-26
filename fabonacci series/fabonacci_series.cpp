#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int t1, t2, next, i, j, first;
    first = 0;
    i = j = 1;
    t1 = 0;
    t2 = 1;
    next = 0;
    while (i <= n)
    {
        j = 1;
        while (j <= i)
        {
            if (first == 0)
            {
                cout << "0 ";
                first++;
            }
            else
            {
                t1 = t2;
                t2 = next;
                next = t1 + t2;
                cout << next << " ";
            }
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}