#include <iostream>
#include <algorithm>
#include <cmath>
#define lng long
using namespace std;

void ab_plus_C()
{
    lng int x, a, b, c;
    cin >> x;
    if (x == 1)
    {
        cout << "-1" << endl;
    }
    else if (x <= 1000000)
    {
        cout << "1 "<< "1 "<< x - 1 << endl;
    }
    else
    {
        a = b = (int)sqrt(x);
        if (x - a * b == 0)
        {
            a--;
        }
        else if (a * b > x)
        {
            a--;
            b--;
        }
        else
        {
            a++;
            if (a * b > x)
            {
                a--;
            }
        }
        c = x - a * b;
        cout << a << " " << b << " " << c << endl;
    }
}

int main()
{
    lng int t;
    cin >> t;
    while (t--)
    {
        ab_plus_C();
    }

    return 0;
}