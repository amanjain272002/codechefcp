#include <iostream>
#include <string>

using namespace std;

void solve(int n)
{
    string s;
    cin >> s;
    int p = 0;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            p = 1;
            break;
        }
    }
    if (p == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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