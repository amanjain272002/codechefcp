#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int r1,r2,r3;
        string ans = "NO";
        cin>>r1>>r2>>r3;
        if (r3>r1+r2)
        {
            ans = "YES";
        }
        else if (r2>r3+r1)
        {
            ans = "YES";
        }
        else if (r1>r2+r3)
        {
            ans = "YES";
        }
        cout<<ans<<endl;
    }
    
    return 0;
}