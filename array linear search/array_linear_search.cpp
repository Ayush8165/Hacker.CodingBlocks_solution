#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int arr[a];
    int i = 0;
    while (i < a)
    {
        cin >> arr[i];
        i++;
    }
    int target;
    cin >> target;
    int flag = 1;
    i = 0;
    while (i < a)
    {
        if (target == arr[i])
        {
            cout << i;
            flag = 1;
            break;
        }
        else
        {
            flag = 0;
        }
        i++;
    }
    if (flag == 0)
    {
        cout << "-1";
    }

    return 0;
}