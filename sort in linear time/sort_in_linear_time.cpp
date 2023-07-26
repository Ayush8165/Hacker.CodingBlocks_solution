#include <iostream>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    int arr[n];
    int i = 0;
    while (i < n)
    {
        cin >> arr[i];
        i++;
    }

    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }

    i = 0;
    while (i < n)
    {
        cout<< arr[i]<<", ";
        i++;
    }
    cout<<"END";

    return 0;
}