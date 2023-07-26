#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int m = n;
    int p = 0;
    int sum = 0;
    while (m > 0)
    {
        m = m / 10;
        p++;
    }
    // cout << p << endl;
    m = n;
    while (m > 0)
    {
        // sum = sum + (m % 10) * p;
        sum = sum + pow(m % 10, p);
        m = m / 10;
        // cout << sum << endl;
        // cout << m << endl;
    }
    if (sum == n)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }

    return 0;
}