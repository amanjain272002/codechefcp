#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int a;
        string ans = "NO";
        cin>>a;
        if (a>=30)
        {
            ans = "YES";
        }
        cout<<ans<<endl;
    }
    
    return 0;
}