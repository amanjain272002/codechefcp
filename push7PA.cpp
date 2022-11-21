#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n, j, min = 1000, value = 0, past = -1;
        cin >> n;
        long int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] < min)
            {
                min = a[i];
                j = i;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (j != i && a[i] != past)
            {
                a[i]++;
                if (a[j] - a[i] == 1)
                {
                    value += a[i];
                    past = a[i];
                }
                j = i;
            }
        }
        cout << min + value << endl;
    }

    return 0;
}