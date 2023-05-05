#include <iostream>
#include <algorithm>
using namespace std;

void solve(long int n)
{
    int a[100001];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int mx = a[n - 1], mx1 = 0;
    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i] != mx)
        {
            mx1 = a[i];
            break;
        }
    }
    cout << mx + mx1 << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n;
        cin >> n;
        solve(n);
    }

    return 0;
}
