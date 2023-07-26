#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, i = 0;
    cin >> n;
    int arr[n];
    while (i < n)
    {
        cin >> arr[i];
        i++;
    }

    i = 0;
    int min = INT_MAX;
    int min_index;
    int temp;
    bool flag;
    int j = 0;
    while (1)
    {
        flag = true;
        i = j;
        min = INT_MAX;
        while (i < n)
        {
            if (min > arr[i])
            {
                min = arr[i];
                min_index = i;
                flag = false;
            }
            i++;
        }
        if (flag == false)
        {
            temp = arr[j];
            arr[j] = min;
            arr[min_index] = temp;
            j++;
        }
        else
        {
            break;
        }
    }

    i = 0;
    while (i < n)
    {
        cout << arr[i] << endl;
        i++;
    }

    return 0;
}