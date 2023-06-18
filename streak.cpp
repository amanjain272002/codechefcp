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
        if (om != 0)
        {
            c++;
            o = max(o, c);
        }
        else
        {
            c = 0;
        }
    }
    ll addy, a = 0, cn = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> addy;
        if (addy != 0)
        {
            cn++;
            a = max(a, cn);
        }
        else
        {
            cn = 0;
        }
    }
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