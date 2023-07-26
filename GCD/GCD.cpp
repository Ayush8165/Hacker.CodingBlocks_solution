#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter first no :: ";
    cin >> a;
    cout << "Enter second no :: ";
    cin >> b;

    int max, min;
    if (a > b)
    {
        max = a;
        min = b;
    }
    else
    {
        max = b;
        min = a;
    }
    
    int i = 1;
    int HCF = 0;
    while (i < max)
    {
        if (max % i == 0 && min % i == 0)
        {
            HCF = i;
        }
        i++;
    }
    
    cout << "\nHCF :: " << HCF << endl;
    return 0;
}