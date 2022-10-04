#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int a,b,p,q;
        cin>>a>>b>>p>>q;
        int s1 = a+b;
        int s2 = p+q;
        if ((a==p)&&(b==q))
        {
            cout<<0<<endl;
        }
        else if (((s1%2==0)&&(s2%2==0))||((s1%2==1)&&(s2%2==1)))
        {
            cout<<2<<endl;
        }
        else{
            cout<<1<<endl;
        }
        
    }
    
    
    return 0;
}