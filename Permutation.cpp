#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,m=0;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for (int i = 0; i < n; i++)
        {
            if (a[i]!=i+1&&a[i]<i+1)
            {
                m = m + (i+1-a[i]);
            }
            else if (a[i]>i+1)
            {
                m = -1;
                break;
            }
            
        }
        
        cout<<m<<endl;
    }
    
    return 0;
}