#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int c, d;
    c = a;
    d = b;
    int i = 2;
    int LCM = 1;

    if (a == 1 || b == 1)
    {
        LCM = a * b;
        cout << LCM;
        return 0;
    }

    while (a > 1 && b > 1)
    {
    app:
        i = 2;
        while (i <= c && i <= d)
        {
            if (a % i == 0 && b % i == 0)
            {
                a = a / i;
                b = b / i;
                LCM = LCM * i;
                goto app;
            }
            if (a % i == 0)
            {
                a = a / i;
                LCM = LCM * i;
                goto app;
            }
            if (b % i == 0)
            {
                b = b / i;
                LCM = LCM * i;
                goto app;
            }
            i++;
        }
        
    }
    
    cout << LCM;

    return 0;
}