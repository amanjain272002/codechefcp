#include <iostream>
using namespace std;

void solve()
{
    long int r, g, b;
    cin >> r >> g >> b;
    if (r == 0 && b == 0 && g == 0)
    {
        cout << 0;
    }
    else if (r>=3&&g>=3&&b>=3)
    {
        cout<<6;
    }
    
    
}

int main()
{
    long int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }

    return 0;
}