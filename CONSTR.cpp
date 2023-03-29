#include <iostream>
#include<map>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,mx=0,cnt=0;
        cin>>n;
        char k;
        string p="";
        string s;
        cin>>s;
        map<char,int>m;
        for (int i = 0; i < n; i++)
        {
            m[s[i]]++;
            mx = max(mx,m[s[i]]);
            if (mx<m[s[i]])
            {
                mx = m[s[i]];
                k = s[i];
            }
            
        }
        if (mx%2!=0)
        {
            p = p + s[0];
            for (int i = 1; i < n; i++)
            {
                if (s[i-1]!=s[i])
                {
                    p = p + s[i];
                }
            }
        }
        else
        {
            p = p + s[0];
            for (int i = 1; i < n; i++)
            {
                if (k == s[i] && cnt == 0)
                {
                    p = p + s[i];
                    cnt++;
                }
                if (s[i-1]!=s[i])
                {
                    p = p + s[i];
                }
            }
        }
        cout<<p<<endl;
        
        
    }

    return 0;
}
