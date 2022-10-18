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
        
        for (int i = 0; i < n-1; i++)
        {
            if (s[i]==s[i+1])
            {
                count++;
            }
        }
        if(count==0){
            cout<<n<<endl;
            
        }
        else if (count==n-1)
        {
            cout<<"1"<<endl;
            
        }
        else{
            if ((n<=3)&&(count!=0)&&(count!=n-1))
            {
                cout<<n<<endl;
               
            }
            else{
                cout<<n-count<<endl;
                
            }
            
        }
    }
    
    return 0;
}