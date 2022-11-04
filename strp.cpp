#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        long int n;
        int count = 0;
        string s;
        cin>>n;
        cin>>s;
        for (int i = 0; i < n; i++)
        {
            if (s[i]==s[i+1]&&(i!=n-1))
            {
                // cout<<s[i]<<" "<<i<<endl;
                count++;
                i = i+1;
            }
            else
            {
                // cout<<s[i]<<" "<<i<<endl;
                count++;
            }
            
        }
        cout<<count<<endl;
    }
    
    return 0;
}