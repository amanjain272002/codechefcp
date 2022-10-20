#include<iostream>
#include<string>

using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        string s;
        int n,count = 0;
        cin>>n>>s;
        for (int i = 0; i < n-1; i++)
        {
            if (s[i]=='1'&&s[i+1]=='0')
            {
                count++;
            }
        }
        cout<<count<<endl;
        
    }
    
    return 0;
}