#include <cmath>
#include <stdio.h>
#include <string.h>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int z = 0, num;
    cin >> num;
    while (z < num)
    {
        char s[100], first, second;
        int count = 0, i, j;
        cin >> s;
        getchar();
        int len = strlen(s);
        for (i = 0; i < len - 1; i++)
        {
            if (i == 0)
            {
                count++;
            }
            else
            {
                first = s[i];
                second = s[i + 1];
                count++;
                for (j = 0; j < i; j++)
                {
                    if (s[j + 1] == second && s[j] == first)
                    {
                        count--;
                    }
                }
            }
        }
        cout << count << "\n";

        count = 0;
        z++;
    }

    return 0;
}
