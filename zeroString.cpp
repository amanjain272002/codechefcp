#include<iostream>
#include<math.h>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,one = 0,zero=0;
        cin>>n;
        string s;
        cin>>s;
        for (int i = 0; i < n; i++)
        {
            if (s[i]=='1')
            {
                one++;
            }
            else
            {
                zero++;
            }
        }
        if (one<=zero)
        {
            cout<<one<<endl;
        }
        else
        {
            cout<<1+zero<<endl;
        }
        
        
    }
    
    return 0;
}