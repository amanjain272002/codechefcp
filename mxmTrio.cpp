#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        long int n,ans = 0;
        cin>>n;
        long int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        ans = (a[n-1] - a[0])*a[n-2];
        cout<<ans<<endl;
    }
    
    return 0;
}