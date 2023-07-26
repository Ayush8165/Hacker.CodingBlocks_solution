#include <bits/stdc++.h>
using namespace std;

void lexical_arrange(string strings[], int size)
{
    /* code */
    int comp = size;
    while (comp--)
    {
        char min_char = '~';
        int j = 0;
        int index = -1;

        for (int i = 0; i < size; i++)
        {
            /* code */
            if (strings[i][j] < min_char)
            {
                index = i;
                min_char = strings[i][j];
            }
            else if (strings[i][j] == min_char)
            {
                int temp = j;
                while (1)
                {
                    j++;
                    if (j == strings[i].length() - 1 and strings[i][j] == strings[index][j])
                    {
                        break;
                    }
                    else if (j == strings[index].length() - 1 and strings[i][j] == strings[index][j])
                    {
                        index = i;
                        min_char = strings[i][temp];
                        break;
                    }

                    if (strings[i][j] < strings[index][j])
                    {
                        index = i;
                        min_char = strings[i][temp];
                        break;
                    }
                    else if (strings[i][j] > strings[index][j])
                    {
                        break;
                    }
                }
                j = 0;
            }
        }
        cout << strings[index] << endl;
        strings[index] = "~";
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int size;
    cin >> size;
    string strings[size];
    for (int i = 0; i < size; i++)
    {
        cin >> strings[i];
    }

    lexical_arrange(strings, size);

    return 0;
}