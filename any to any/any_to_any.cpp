#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int sb, db, sno;
    cin >> sb >> db >> sno;
    int answer = 0;
    int dec = 0;
    int power = 0;
    while (sno > 0)
    {
        dec = dec + (sno % 10) * pow(sb, power);
        power++;
        sno = sno / 10;
    }
    power = 0;
    // cout << dec<<endl;
    while (dec > 0)
    {
        answer = answer + (dec % db) * pow(10, power);
        power++;
        dec = dec / db;
    }
    cout<<answer;
    return 0;
}