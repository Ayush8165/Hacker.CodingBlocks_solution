#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int dec;
    cin >> dec;
    int oct = 0;
    int i = 0;
    while (dec > 0)
    {
        oct = oct + (dec % 8) * pow(10, i);
        i++;
        dec = dec / 8;
    }
    cout<<oct;
    return 0;
}