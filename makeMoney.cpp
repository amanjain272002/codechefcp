#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,x,c,sum= 0 ,costsum = 0,prevsum=0,csum=0;
        cin>>n>>x>>c;
        int a[100];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            prevsum = prevsum + a[i];
        }
        sum = prevsum;
        sort(a,a+n);
        for (int i = 0; i < n; i++)
        {
            if (a[i]<x)
            {
                sum = sum - a[i] + x;
                costsum = costsum + c;
                csum = sum - costsum;
                a[i] = x;
                if (csum>prevsum)
                {
                    prevsum = csum;
                }
            }
        }
        cout<<prevsum<<endl;
        
    }
    
    return 0;
}