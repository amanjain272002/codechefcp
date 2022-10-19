#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {   
        int n,count=0;
        string s;
        cin>>n>>s;
        for (int i = 0; i < n/2 ; i++)
        {
            if (s[i]!=s[n-1-i])
            {
                count++;
            }
        }
        if (count%2!=0)
        {
            cout<<count/2+1<<endl;
        }
        else{
            cout<<count/2<<endl;
        }
        
        
        
    }
    
    return 0;
}