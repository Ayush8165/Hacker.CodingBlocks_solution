#include <iostream>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int a;
    cin >> a;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }

    int b;
    cin >> b;
    int brr[b];
    for (int i = 0; i < b; i++)
    {
        cin >> brr[i];
    }

    int carry = 0;
    if (a > b)
    {
        for (int i = a - 1; i >= 0; i--)
        {
            if (b <= 0)
            {
                arr[i] = arr[i] + carry;
                carry = 0;
            }
            else
            {
                arr[i] = arr[i] + brr[b - 1] + carry;
                carry = 0;
            }

            if (arr[i] > 9)
            {
                carry = arr[i] / 10;
                arr[i] = arr[i] % 10;
            }
            b--;
        }

        if (carry != 0)
        {
            cout << carry << ", ";
        }
        for (int i = 0; i < a; i++)
        {
            cout << arr[i] << ", ";
        }
        cout << "END";
    }
    else
    {
        for (int i = b - 1; i >= 0; i--)
        {
            if (a <= 0)
            {
                brr[i] = brr[i] + carry;
                carry = 0;
            }
            else
            {
                brr[i] = brr[i] + arr[a - 1] + carry;
                carry = 0;
            }

            if (brr[i] > 9)
            {
                carry = brr[i] / 10;
                brr[i] = brr[i] % 10;
            }
            a--;
        }

        if (carry != 0)
        {
            cout << carry << ", ";
        }
        for (int i = 0; i < b; i++)
        {
            cout << brr[i] << ", ";
        }
        cout << "END";
    }

    return 0;
}