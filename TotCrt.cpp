#include<iostream>
#include<map>
#include<string>
#include<set>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        long int n,x;
        cin>>n;
        map<string,long int> m;
        multiset<long int> p;
        string s;
        for (int i = 0; i < 3*n; i++)
        {
            cin>>s>>x;
            m[s] = m[s]+x;
        }
        for (auto i = m.begin(); i != m.end(); i++)
        {
            p.insert(i->second);
        }
        for (auto i = p.begin(); i != p.end(); i++)
        {
            cout<<*i<<" ";
        }
        
        cout<<endl;
        
    }
    
    return 0;
}