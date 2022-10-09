#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        
        int n;
        cin>>n;
        long long a[n],b[n],v[n],s1=0,s2=0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
         for (int i = 0; i < n; i++)
        {
            cin>>b[i];
        }
        for (int i = 0; i < n; i++)
        {
            v[i]=max(a[i],b[i]);
            s1 = s1 + v[i]-a[i];
            s2 = s2 + v[i]-b[i];
        }
        if(s1==s2){
            cout<<s1<<endl;
        }
        else
        cout<<"-1"<<endl;

    }
    
    return 0;
}