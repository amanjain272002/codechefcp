#include<iostream>
#include<string>
#include <set>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin>>s;
        set<string> s1;
        for (int i = 0 ; i < s.length()-1; i++)
        {
            s1.insert(s.substr(i,2));
        }
        cout<<s1.size()<<endl;
    }
    
    return 0;
}