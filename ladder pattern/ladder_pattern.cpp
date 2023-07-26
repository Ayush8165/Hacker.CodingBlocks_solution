#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;
    int j = 1;
    int k = 1;
    while (j <= n)
    {
        k = 1;
        while (k <= j)
        {
            cout << i << "  ";
            i++;
            k++;
        }
        cout << endl;
        j++;
    }

    return 0;
}