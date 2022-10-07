#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int x,y;
        cin>>x>>y;
        if(((x%2==0)&&(y%2==0))||((x%2==0)&&(y%2==1)&&(x>1)))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    
    return 0;
}