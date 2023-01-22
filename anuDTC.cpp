#include <iostream>
using namespace std;

void solve()
{
    int n, l;
    cin>>n;
    l = 360 % n;
    if (l == 0)
    {
        cout << "y ";
    }
    else
    {
        cout << "n ";
    }

    if (n <= 360)
    {
        cout << "y ";
    }
    else
    {
        cout << "n ";
    }

    if (n * (n + 1) / 2 <= 360)
    {
        cout << "y ";
    }
    else
    {
        cout << "n ";
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout<<"\n";
    }

    return 0;
}