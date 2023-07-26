#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int odd, even;
    even = odd = 0;
    int flag = 1;
    while (n > 0)
    {
        if (flag == 1)
        {
            odd = odd + n % 10;
            n = n / 10;
            flag = 0;
        }
        else
        {
            even = even + n % 10;
            n = n / 10;
            flag = 1;
        }
    }
    cout<<odd<<endl;
    cout<<even;

    return 0;
}