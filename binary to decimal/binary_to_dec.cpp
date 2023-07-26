#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int bin;
    cin >> bin;
    int power = 0;
    int dec = 0;
    while (bin > 0)
    {
        dec = dec + (bin % 10) * (pow(2, power));
        bin = bin /10;
        power++;
    }
    cout<<dec;

    return 0;
}