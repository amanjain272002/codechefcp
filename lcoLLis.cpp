#include <bits/stdc++.h>
using namespace std;

void solve()
{
    unordered_map<int, vector<int>> mp;
    vector<string> vect; 
    int n, m;
    string ele;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin>>ele;
        vect.push_back(ele);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < vect[i].size(); j++)
        {
            if (vect[i][j] == '1')
            {
                mp[j].push_back(i);
            }
        }
    }
    int ans = 0, l = 0;
    for (auto it : mp)
    {
        l = it.second.size();
        if(l>=2){
            ans+=l*(l-1)/2;
        }
    }
    cout << ans << endl;
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