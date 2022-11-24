#include<iostream>
#include<algorithm>
using namespace std;


int main(){
    int t;
    cin>>t;
    while (t--)
    {
        long int n,mn = 123456,count = 0;
        cin>>n;
        long int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            mn = min(mn,a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i]!=mn)
            {
                count = count + a[i] - mn;
            }
        }
        cout<<count<<endl;
    }
    
    return 0;
}