#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        string s,k;
        cin>>s;
        k = s;
        reverse(s.begin(),s.end());
        if (s==k)
        {
            cout<<"wins"<<endl;
        }
        else
        {
            cout<<"loses"<<endl;
        }
        
        
    }
    return 0;
}