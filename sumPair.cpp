#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {

        long int n,a[1000000];
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        cout<<a[0]+a[1]<<endl;
        
        
    }
    
    return 0;

}