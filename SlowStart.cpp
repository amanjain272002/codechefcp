#include <bits/stdc++.h>
using namespace std;

void slstart()
{
    int x, h, countturns = 1;
    cin >> x >> h;
    if (h < x / 2)
    {
        cout << 1;
    }
    else
    {
        if (5 * x / 2 >= h) 
        {
            x = x / 2;
            if (h % x == 0)
            {
                cout << h / x;
            }
            else
            {
                cout << h / x + 1;
            }
        }
        else
        {
            h = h - 5 * x / 2;
            countturns = 5;
            if (h%x!=0)
            {
                countturns+=h/x+1;
            }
            else
            {
                countturns+=h/x;
            }
            
            cout << countturns;
        }
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        slstart();
    }
    return 0;
}