#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<string> ans;
    unordered_set<string> sp;
    string tmp;
    for (int i = 0; i < t; i++)
    {
        cin >> tmp;
        ans.push_back(tmp);
    }
    string result = "";
    for (int i = t-1; i >=0; i--)
    {
        if (sp.find(ans[i])==sp.end())
        {
            result = result  + ans[i][ans[i].size() - 2] + ans[i][ans[i].size() - 1];
        }
        sp.insert(ans[i]);
    }
    cout<<result;
    return 0;
}