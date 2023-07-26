#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i, j;
    i = j = 1;
    while (i <= n)
    {
        j = 1;
        while (j <= i)
        {
            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}