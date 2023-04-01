#include <iostream>
#include <algorithm>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n] = {0};
    int p[n] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        p[i] = i + 1;
    }
    sort(a,a+n);
    int move = 0, flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (p[i] < a[i])
        {
            flag = 1;
            break;
        }
        move = move + p[i] - a[i];
    }
    if (flag)
    {
        cout << "Second" << endl;
    }
    else
    {
        if (move % 2 != 0)
        {
            cout << "First" << endl;
        }
        else
        {
            cout << "Second" << endl;
        }
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