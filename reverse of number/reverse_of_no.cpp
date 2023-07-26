#include <iostream>
using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n, m;
    cin >> n;
    m = n;
    int counter = 0;
    while (m > 0)
    {
        m = m / 10;
        counter++;
    }
    // cout << counter<<endl;
    int arr[counter];
    int temp = 0, index = 1;
    int i = 0;
    while (n > 0)
    {
        temp = n % 10;
        arr[counter - temp] = index;
        index++;
        n = n / 10;
    }
    while (i<counter)
    {
        cout<<arr[i];
        i++;
    }
    
    // cout<<arr;

    return 0;
}