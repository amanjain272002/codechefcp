#include <iostream>
#include <cmath>
using namespace std;

void solve()
{
    double x1, y1, x2, y2, a, b;
    cin >> x1 >> y1 >> x2 >> y2;
    a = sqrt(x1 * x1 + y1 * y1);
    b = sqrt(x2 * x2 + y2 * y2);
    if (a == b)
    {
        cout << "EQUAL" << endl;
    }
    else if (a > b)
    {
        cout << "ALEX" << endl;
    }
    else
    {
        cout << "BOB" << endl;
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