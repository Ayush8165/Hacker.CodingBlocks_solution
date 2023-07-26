#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int temp;
    int arr[n];
    int counter = 1;
    while (n > 0)
    {
        temp = n % 10;
        arr[temp - 1] = counter;
        cout<<arr[temp -1];
        // cout<<temp;
        counter++;
        n = n/10;
    }

    int i = 0;
    while (i < n)
    {
        cout << arr[i];
    }

    return 0;
}