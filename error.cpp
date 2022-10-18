#include<iostream>
#include<string>

using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        string s;
        int count0=0;
        cin>>s;
        for (int i = 0; i < s.length()-1; i++)
        {
            if(s[i]!=s[i+1]){
                count0++;
            }
            if(count0>=2){
                break;
            }
        }
        if (count0==2)
        {
            cout<<"Good"<<endl;
        }
        else{
            cout<<"Bad"<<endl;
        }
        
        
    }
    
    return 0;
}