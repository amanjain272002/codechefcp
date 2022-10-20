#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int a,b,count= 0;
        cin>>a>>b;
        while (a>=b)
        {
            count++;
            a = a-b;
        }
        cout<<count*count<<endl;
    }
    
    return 0;
}