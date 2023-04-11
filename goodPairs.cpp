#include<iostream>
#include<map>
#define ll long long 
using namespace std;

void goodPairs(){
    ll int n,ans = 0;
    cin>>n;
    ll int a[n],b[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
    }

    map<pair<ll int,ll int>,ll int> m;
    for (int i = 0; i < n; i++)
    {
        ans += m[{b[i],a[i]}];
        m[{a[i],b[i]}]++;
    }
    cout<<ans<<endl;
}

int main(){
    ll int t;
    cin>>t;
    while (t--)
    {
        goodPairs();
    }
    
}