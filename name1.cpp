#include <iostream>
#include <string>
#include <map>
using namespace std;

string solve(string p, string s)
{
    map<char,int> m;
    map<char,int> q;
    if (p.length()<s.length())
    {
        return "NO";
    }
    for(auto i:p){
        m[i]++;
    }
    
    for(auto i:s){
        q[i]++;
    }
    
    for(auto i:s){
        if (m[i]<q[i])
        {
            return "NO";
        }
        if (m[i] == 0)
        {
            return "NO";
        }
        
    }
    return "YES";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2, s3 = "", s4, s5 = "";
        int n, flag = 0;
        cin >> s1 >> s2;
        s3 = s1 + s2;

        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> s4;
            s5 = s5 + s4;
        }

        cout << solve(s3, s5) << endl;
    }

    return 0;
}