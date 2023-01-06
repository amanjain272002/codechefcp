#include <iostream>
#include <algorithm>
using namespace std;

void solve(int n)
{
    char correct[n], chef[n];
    long long int W[n + 1], ans = 0, count = 0;
    cin >> correct;
    cin >> chef;

    for (int i = 0; i <= n; i++)
    {
        cin >> W[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (correct[i] == chef[i])
        {
            count++;
        }
    }

    for (int i = 0; i <= count; i++)
    {
        ans = max(ans, W[i]);
    }
    if (count == n)
        cout << W[n] << endl;
    else
        cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        solve(n);
    }

    return 0;
}