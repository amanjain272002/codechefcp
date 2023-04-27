#include <iostream>
#include <algorithm>
#include <cmath>
#define lng long
using namespace std;

void ab_plus_C()
{
    lng int x, f = 0, c = 0,a;
    lng num , num1 ;
    cin >> x;
    if (x == 1)
    {
        cout << "-1" << endl;
    }
    else if (x == 2)
    {
        cout << "1 "
             << "1 "
             << "1" << endl;
    }

    else
    {
        
        num = sqrtl(x);
        f = floorl(num);
        c = ceill(num);
        if (f * c == x)
        {
            x = x - 1;
            num1 = sqrtl(x);
            f = floorl(num1);
            c = ceill(num1);
            cout << f << " " << c << " " << (x + 1) - (f * c) << endl;
        }
        else
        {
            cout << f << " " << c << " " << x - (f * c) << endl;
        }
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