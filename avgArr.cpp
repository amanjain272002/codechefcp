#include<iostream>
using namespace std;

void solve(){
    long int n,x,k,sum=0;
    cin>>n>>x;
    for (int i = 1; i <= n/2; i++)
    {
        cout<<x+i<<" ";
    }
    for (int i = 1; i <= n/2; i++)
    {
        cout<<x-i<<" ";
    }
    if (n%2==1)
    {
        cout<<x;
    }
}

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        solve();
        cout<<"\n";
    }
    
    return 0;
}