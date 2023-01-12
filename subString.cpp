#include<iostream>
#include<string>
#include<unordered_set>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        int l = s.length();
        unordered_set<char> p;
        for (int i = 0; i < l; i++)
        {
            p.insert(s[i]);
        }
        if (p.size()==1)
        {
            cout<<-1<<endl;
        }
        else
        {
            int countstart= 0,countend=0,mx=0,me=0;

            for (auto it = p.begin(); it !=p.end(); it++)
            {
                if (*it != s[0] )
                {
                    countstart++;
                    mx = max(countstart,mx);
                }
                if (*it!=s[l-1])
                {
                    countend++;
                    me = max(countend,me);
                }
                if (*it == s[0])
                {
                    countstart=0;
                }
                if (*it==s[l-1])
                {
                    countend=0;
                }
            }
            
            /* code */
        }
        
        
    }
    
    return 0;
}