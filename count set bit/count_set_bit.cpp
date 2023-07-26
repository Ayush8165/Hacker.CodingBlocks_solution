#include <iostream>
using namespace std;

int count(int a)
{
    int counter = 0;
    int temp;
    while (a > 0)
    {
        temp = a % 2;
        if (temp == 1)
        {
            counter++;
        }
        a = a / 2;
    }
    return counter;
}

int main()
{
    int n;
    cin >> n;
    int i = 1;
    int temp;
    int counter;
    while (i <= n)
    {
        cin >> temp;
        counter = count(temp);
        cout<<counter<<endl;
        i++;
    }

    return 0;
}