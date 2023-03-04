#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solve()
{
    int k;
    cin >> k;
    string a;
    vector<string> v;
    for (int i = 0; i < k; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    int ans = 0;
    for (int i = 0; i < k; i++)
    {
        string s = v[i];
        int cnt1 = 0, cnt2 = 0;
        for (int j = 0; j < s.length(); j++)
        {
            if (s[j] >= 'a' && s[j] <= 'm')
            {
                cnt1++;
            }

            else if (s[j] >= 'N' && s[j] <= 'Z')
            {
                cnt2++;
            }

            if (cnt1 == s.length() && cnt2 == 0)
            {
                ans++;
            }
            else if (cnt2 == s.length() && cnt1 == 0)
            {
                ans++;
            }
        }
    }
    if (ans == k)
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
        solve();
    }

    return 0;
}