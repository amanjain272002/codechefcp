#include <iostream>
using namespace std;

int main()
{
    long int t;
    cin >> t;
    while (t--)
    {
        long int n, m, k, x;
        cin >> n >> m >> k >> x;
        int var = x % (k * n);
        int w = n*(k-1) + m;
        if ((var == 1) || (w - var > 0))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}