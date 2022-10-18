#include <iostream>
#include<string>
#include <algorithm>

using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, x, y,count=0;
        cin>>n>>x>>y;
        string s;
        cin>>s;
        for (int i = 0; i < n-1; i++)
        {
            if (s[i]!=s[i+1])
            {
                count++;
            }
        }
        if (count==0)
        {
            cout<<"0"<<endl;
        }
        else{
            cout<<min(x,y)<<endl;
        }
        
        
    }

    return 0;
}