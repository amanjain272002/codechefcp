#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,mx=0;
        cin>>n;
        int a;
        for (int i = 1; i <= n; i++)
        {
            cin>>a;
            mx = max(mx,a);
        }
        cout<<n-mx<<endl;
    }
    
    return 0;
}