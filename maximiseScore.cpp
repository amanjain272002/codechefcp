#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

void maximise_score(long int n)
{
    long int alice, bob, mn = 11000;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
        {
            cin >> bob;
            mn = min(mn, abs(alice - bob));
        }
        else
        {
            cin >> alice;
        }
    }
    cout << mn << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n;
        cin >> n;
        maximise_score(n);
    }

    return 0;
}