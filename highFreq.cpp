#include<iostream>
#include<map>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,a;
        cin>>n;
        map<int,int> m;
        for (int i = 0; i < n; i++)
        {
            cin>>a;
            m[a]++;
        }
        int mx = 0;
        int p;
        for(auto it = m.begin();it!=m.end();++it){
            mx = max(mx,it->second);
            if (mx == it->second)
            {
                p = it->first;
            }
        }
        int ans = (mx+1)/2;
        int q=0;
        for(auto it = m.begin();it!=m.end();++it){
            if (it->first!=p)
            {
                q = max(q,it->second);
            }
        }
        cout<<max(ans,q)<<endl;
    }
    
    return 0;
}