#include <iostream>
#include <string>
using namespace std;

void solve()
{
    long int x, y;
    cin >> x >> y;
    if (x > y)
    {
        if ((x - y) > 1)
        {
            cout << "CHEF" << endl;
        }
        else if ((x - y) == 1)
        {
            if (x%2==0)
            {
                cout << "CHEF" << endl;
            }
            else
            {
                cout << "CHEFINA" << endl;
            }
            
        }
    }

    else if (x < y)
    {
        if ((y - x) > 1 )
        {
            cout << "CHEFINA" << endl;
        }
        else if ((y - x) == 1)
        {
            if (y%2==0)
            {
                cout << "CHEF" << endl;
            }
            else
            {
                cout << "CHEFINA" << endl;
            }
        }
    }
    else
    {
        if (x % 2 == 0)
        {
            cout << "CHEFINA" << endl;
        }
        else
        {
            cout << "CHEF" << endl;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}