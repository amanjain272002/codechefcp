#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        long int a,b,n,ans = 0;
        cin>>a>>b>>n;
        if (n%2==0)
        {
            if (labs(a)>labs(b))
            {
                ans = 1;
            }
            else if (labs(a)<labs(b))
            {
                ans = 2;
            }
        }
        else
        {
            if (a>b)
            {
                ans = 1;
            }
            else if (a<b)
            {
                ans = 2;
            }
        }
        cout<<ans<<endl;
    }
    
    return 0;
}