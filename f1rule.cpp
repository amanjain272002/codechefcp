#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i = 0;i<t;i++){
        int x,y;
        cin >> x >> y;
        if(x*1.07>y)
        cout<<"YES";
        else if(x*1.07==y)
        cout<<"YES";
        else
        cout<<"NO";
        cout<<"\n";
        
    }
    return 0;
}