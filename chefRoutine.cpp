#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int flag = 0 ;
        string s;
        cin>>s;
        for (int i = 0; i <  s.length(); i++)
        {
            if(s[i]=='S'&&s[i+1]=='E'){
                flag =1;
                break;
            }
            else if (s[i]=='E'&&s[i+1]=='C')
            {
                flag = 1;
                break;
            }
            else if (s[i]=='S'&&s[i+1]=='C')
            {
                flag = 1;
                break;
            }
        }
        if(flag==1){
            cout<<"no"<<endl;
        }
        else{
            cout<<"yes"<<endl;
        }
        
    }
    
    return 0;
}