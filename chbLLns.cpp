#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        long int r,g,b,k;
        cin>>r>>g>>b>>k;

        if (r>=k)
        {
            r = k-1;
        }
        
        if (g>=k)
        {
            g = k-1;
        }
        
        if (b>=k)
        {
            b = k-1;
        }
        cout<<r+g+b+1<<endl;
    }   
    
    return 0;
}