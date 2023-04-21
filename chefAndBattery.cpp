#include<iostream>
using namespace std;

void solve(){
    int n;
    cin>>n;
    if (n==50)
    {
        cout<<0<<endl;
    }
    else if (n<50)
    {
        if (n%2==0)
        {
            cout<<(50-n)/2<<endl;
        }
        else
        {
            cout<<1+(50-(n-3))/2<<endl;
        }
        
    }

    else
    {
        int cnt = 0;
        while (true)
        {
            if (n>50)
            {
                n = n-3;
                cnt++;
            }
            else if (n<50 && n%2!=0)
            {
                n = n-3;
                cnt++;
            }
            else
            {
                break;
            }
            
        }
        cout<<cnt + (50-n)/2<<endl;
    }
    
    
    
}

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}