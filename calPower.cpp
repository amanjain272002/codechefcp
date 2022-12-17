#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        int power = 0,val=0;
        cin>>s;
        sort(s.begin(),s.end());
        for (int i = 0; i < s.length(); i++)
        {
            val = int(s[i]) - 96;
            power = power + (i+1)*val;
        }
        cout<<power<<endl;
    }
    
    return 0;
}