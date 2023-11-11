#include <bits/stdc++.h>
#define ll long long
using namespace std;

string solve()
{
    ll n, ele;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cin >> ele;
        arr.push_back(ele);
    }
    sort(arr.begin(), arr.end());
    for (int i = 1; i < n - 1; i++)
    {
        if ((3 * arr[i] != arr[i + 1] + 2 * arr[i - 1]) && (3 * arr[i] != 2 * arr[i + 1] + arr[i - 1]))
        {
            return "NO";
        }
    }
    return "YES";
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        cout << solve() << endl;
    }

    return 0;
}