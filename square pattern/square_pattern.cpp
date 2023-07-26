#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1; // line counter
    int m = 1; // print counter
    int k = 1; // printer
    int j = 1; // k counter
    while (i <= n)
    {
        k = i;
        j = 1;
        m = 1;
        while (m <= n)
        {
            if (j <= i)
            {
                cout << k<<" ";
                j++;
            }
            else
            {
                k++;
                cout << k<<" ";
                // cout<<k;
            }
            m++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}