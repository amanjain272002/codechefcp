#include<iostream>
#include<string>
#include<set>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        string a,b,ans = "No";
        cin>>a>>b;
        set<char> s1;
        for (int i = 0; i < a.length(); i++)
        {
            s1.insert(a[i]);
        }
        for (int i = 0; i < b.length(); i++)
        {
            if (s1.find(b[i])!=s1.end())
            {
                ans = "Yes";
                break;
            }
        }
        cout<<ans<<endl;
        
    }
    
    return 0;
}