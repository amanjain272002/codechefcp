#include<iostream>
using namespace std;

int main(){
    int t;
    int x, y,z;
    cin>>t;
    for (int i = 0;i<t;i++){
       
       cin>>x>>y>>z;
       if(abs(x-y)<z)
       cout<<"YES \n";
       else if(abs(x-y)==z)
       cout<<"YES \n";
       else
       cout<<"NO \n";
    }
    return 0;
}