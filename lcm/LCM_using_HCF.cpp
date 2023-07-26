#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a;
    cin >> b;

    int max, min;
    if (a > b)
    {
        max = a;
        min = b;
    }
    else
    {
        max = b;
        min = a;
    }

    int i = 1;
    int HCF = 0;
    while (i < max)
    {
        if (max % i == 0 && min % i == 0)
        {
            HCF = i;
        }
        i++;
    }
    int LCM = (a * b) / HCF;
    cout << LCM << endl;
    return 0;
}