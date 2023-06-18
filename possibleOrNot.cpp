#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,b,a,cr=-1;
        cin>>n>>b;
        for (int i = 0; i < n; i++)
        {
            cin>>a;
            if ((a&b) == b)
            {
                cr = cr&a;
            }
        }
        if (cr == b)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
    
    return 0;
}