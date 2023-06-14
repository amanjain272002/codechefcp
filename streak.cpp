#include <iostream>
#define ll long long int
using namespace std;

void srk()
{
    ll n;
    cin >> n;
    ll om, o = 0, c = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> om;
        if (om == 0)
        {
            o = max(o, c);
            c = 0;
        }
        else
        {
            c++;
        }
    }
    ll addy, a = 0, cn = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> addy;
        if (addy == 0)
        {
            a = max(a, cn);
            cn = 0;
        }
        else
        {
            cn++;
        }
    }
    if (cn == c)
    {
        if (a > o)
        {
            cout << "Addy" << endl;
        }
        else if (a < o)
        {
            cout << "Om" << endl;
        }
        else
        {
            cout << "Draw" << endl;
        }
    }
    else if (cn > c)
    {
        if (cn > o)
        {
            cout << "Addy" << endl;
        }
        else if (cn < o)
        {
            cout << "Om" << endl;
        }
        else
        {
            cout << "Draw" << endl;
        }
    }
    else
    {
        if (c > a)
        {
            cout << "Om" << endl;
        }
        else if (c < a)
        {
            cout << "Addy" << endl;
        }
        else
        {
            cout << "Draw" << endl;
        }
    }
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        srk();
    }

    return 0;
}