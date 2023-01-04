#include <iostream>

using namespace std;

int solve(int n, int m)
{
    return m == 0 ? n : solve(m, n % m);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, mx, mn, cnt = 0;
        cin >> n >> m;
        cout << solve(n, m) << endl;
    }

    return 0;
}