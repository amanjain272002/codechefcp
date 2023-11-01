#include <iostream>
using namespace std;

void solve()
{
    int n, x, d;
    cin >> n >> x >> d;
    cout << n / (5 * x) + d << endl;
}

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
