#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int i = 0;
    int counter = 1;
    int temp;
    while (counter <= n)
    {
        temp = 3 * i + 2;
        if (temp % m != 0 and temp > m)
        {
            cout << temp << endl;
            counter++;
        }
        i++;
    }

    return 0;
}