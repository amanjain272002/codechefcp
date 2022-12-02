#include<iostream>
#include<set>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        set<char> u;
        cin>>s;
        for (int i = 0; i < s.length(); i++)
        {
            u.insert(s[i]);
        }
        cout<<u.size()<<endl;
    }
    
    return 0;
}