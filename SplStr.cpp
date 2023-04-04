#include<iostream>
#include<string>
#include<cmath>
using namespace std;

void solve(){
    long int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int count=0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    count = abs(count);
    if (count == 0)
    {
        cout<<0<<endl;
    }
    else if (count == 1|| count<k)
    {
        cout<<1<<endl;
    }
    else if (count%k == 0)
    {
        cout<<count/k<<endl;
    }
    else
    {
        cout<<count/k+1<<endl;
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