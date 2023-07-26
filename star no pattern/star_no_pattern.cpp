// patterns

// 1****
// 12***
// 123**
// 1234*
// 12345

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    m = n;
    int i = 1;
    int j = 1;
    int k = 1;
    while (i <= n)
    {
        j = 1;
        k = 1;
        while (j <= i)
        {
            cout << j;
            j++;
        }
        while (k<m)
        {
            cout<<"*";
            k++;
        }
        
        cout << endl;
        i++;
        m--;
    }
    
    return 0;
}