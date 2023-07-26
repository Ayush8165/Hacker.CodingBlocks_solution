#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i, j;
    i = j = 1;
    while (i <= n)
    {
        j = 1;
        while (j <= n)
        {
            if (j <= i - 1)
            {
                cout << " ";
            }
            else
            {
                cout << "* ";
            }
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}