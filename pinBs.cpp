#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    if(s.length() == 1){
        cout<<"NO"<<endl;
    }
    else
    {
        int l = s.length();
        for (int i = 0; i < l-1; i++)
        {
            if ((s[i] == '1' && s[i] == '0') ||(s[i] == '1' && s[i] == '1'))
            {
                cout<<"YES"<<endl;
                return;
            }
        }
        cout<<"NO"<<endl;
        return ;
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