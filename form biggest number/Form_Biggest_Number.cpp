#include <bits/stdc++.h>
using namespace std;

int length_cal(int num)
{
    int i;
    for (i = 0; num != 0; i++)
    {
        num = num / 10;
    }
    return i;
}

void biggest_number(int array[], int size, int maxl, int numbers[])
{
    for (int i = 0; i < size; i++)
    {
        int diff = maxl - length_cal(array[i]);
        array[i] = array[i] * pow(10, diff);
    }

    int a = size;
    int index = -1;
    while (a--)
    {
        int maxi = INT_MIN;
        for (int i = 0; i < size; i++)
        {
            if (array[i] >= maxi)
            {
                maxi = array[i];
                index = i;
            }
        }
        array[index] = 0;
        cout << numbers[index];
    }
    cout << endl;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int test_case;
    cin >> test_case;

    while (test_case--)
    {
        int size;
        cin >> size;
        int numbers[size];
        int array[size];
        int maxl = 0;
        for (int i = 0; i < size; i++)
        {
            cin >> numbers[i];
            array[i] = numbers[i];
            int length = length_cal(array[i]);
            maxl = max(maxl, length);
        }
        biggest_number(array, size, maxl, numbers);
    }

    return 0;
}