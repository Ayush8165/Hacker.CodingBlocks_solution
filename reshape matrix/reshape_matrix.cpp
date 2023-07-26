#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int i = 0;
    int arr[m * n];
    while (i < m * n)
    {
        cin >> arr[i];
        i++;
    }
    int r, c;
    cin >> r >> c;
    int brr[r * c];
    int j = 0;
    int k = 0;
    i = 0;
    while (i<r)
    {
        j = 0;
        while(j<c)
        {
            cout<<arr[k]<<" ";
            k++;
            j++;
        }
        cout<<endl;
        i++;
    }
    
    return 0;
}