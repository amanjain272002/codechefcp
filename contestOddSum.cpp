#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int a,b,c;
        string ans = "NO";
        cin>>a>>b>>c;
        if (((a+b)%2!=0)||((b+c)%2!=0)||((a+c)%2!=0))
        {
            ans = "YES";
        }
        cout<<ans<<endl;
        
        
        

    }
    
    return 0;

}