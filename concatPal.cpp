#include<iostream>
#include<string>
#include<map>
#include<algorithm>
using namespace std;

void solve(){
    int n,m,count=0;
    cin>>n>>m;
    string s1,s2,s;
    cin>>s1>>s2;
    s = s1+s2;
    sort(s.begin(),s.end());
    for (int i = 1; i < n+m; i++)
    {
        if (s[i-1]==s[i])
        {
            count++;
        }
    }
    if ((n+m)%2==0 && count >= n+m-1)
    {
        cout<<"YES"<<endl;
    }
    else if ((n+m)%2!=0 && )
    {
        /* code */
    }
    

}



int main(){
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
    
}