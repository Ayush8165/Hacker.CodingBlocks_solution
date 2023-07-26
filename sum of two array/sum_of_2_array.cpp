#include <iostream>
using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int n, m;
    cin >> n;
    int arr[n];
    int i = 0;
    while (i < n)
    {
        cin >> arr[i];
        i++;
    }

    i = 0;
    cin >> m;
    int brr[m];
    while (i < m)
    {
        cin >> brr[i];
        i++;
    }

    int max;
    if (m >= n)
    {
        int sum[m];
        max = m;
    }
    else
    {
        int sum[n];
        max = n;
    }

    int carry = 0;
    int sum[max];
    int print = max;
    cout<<print;
    n--, m--, max--;

    // while (1)
    // {
    //     if (n >= 0 && m >= 0)
    //     {
    //         sum[max] = arr[n] + brr[m] + carry;
    //         if (sum[max] >= 10)
    //         {
    //             carry = 1;
    //             sum[max] = sum[max] % 10;
    //         }

    //         n--, m--, max--;
    //     }
    //     else if (n < 0)
    //     {
    //         sum[max] = brr[m] + carry;
    //         if (sum[max] >= 10)
    //         {
    //             carry = 1;
    //             sum[max] = sum[max] % 10;
    //         }

    //         m--, max--;
    //     }
    //     else if (m < 0)
    //     {
    //         sum[max] = arr[n] + carry;
    //         if (sum[max] >= 10)
    //         {
    //             carry = 1;
    //             sum[max] = sum[max] % 10;
    //         }

    //         n--, max--;
    //     }
    //     else if (n < 0 && m < 0)
    //     {
    //         break;
    //     }
    // }

    // i = 0;
    // while (i < print)
    // {
    //     cout << sum[i] << ", ";
    //     i++;
    // }
    // cout << "END";

    return 0;
}