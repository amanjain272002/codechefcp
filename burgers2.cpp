#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    long int t;
    cin>>t;
    while (t--)
    {
        long int x,y,n,r,t;
        cin>>x>>y>>n>>r;
        if (x*n>r)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            t = (r-n*x)/(y-x);
            t = min(n,t);
            cout<<n-t<<" "<<t<<endl;
        }
        
        
    }
    
    return 0;
}