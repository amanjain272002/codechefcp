#include <bits/stdc++.h>
#define ll long long
using namespace std;

void s_100()
{
    ll n,pos;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n ; i++)
    {
        if(s[i] == '1'){
            pos = i;
            break;
        }
    }
    if (pos>=n-2)
    {
        cout<<s<<endl;
        return;
    }
    for (int i = pos+1; i < n; i++)
    {
        s[i] = '0';
    }
    
    cout << s << endl;
}   

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        s_100();
    }
}