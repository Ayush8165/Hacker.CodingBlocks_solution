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

    i = 0;
    int temp = 0;
    bool flag;
    while (1)
    {
        i = 0;
        flag = true;
        while (i < n - 1)
        {
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                flag = false;
                break;
            }
            i++;
        }
        if (flag == true)
        {
            break;
        }
    }

    i = 0;
    while (i < n)
    {
        cout << arr[i] << " ";
        i++;
    }

    return 0;
}