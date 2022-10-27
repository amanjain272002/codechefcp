#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,a,count = 0;
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            cin>>a;
            if (a>=1000)
            {
                count++;
            }
            
        }
        cout<<count<<endl;
        
    }
    
    return 0;
}