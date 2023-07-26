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
            if(k == 1 || k == j)
            {
                cout<<j<<"  ";
            }
            else
            {
                cout<<"0    ";
            }
            k++;
        }
        cout<<endl;
        j++;
    }

    return 0;
}