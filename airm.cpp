#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, ele;
    cin >> n;
    vector<int> arr;

    for (int i = 0; i < 2 * n; i++)
    {
        cin >> ele;
        arr.push_back(ele);
    }
    sort(arr.begin(), arr.end());

    int ans = 1, maxi = -1;
    for (int i = 0; i < 2 * n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            ans++;
        }
        else
        {
            ans = 1;
        }
        maxi = max(ans, maxi);
    }

    cout << maxi << endl;
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