#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int amo;
        cin>>amo;
        if (amo>100)
        {
            cout<<amo-10<<endl;
        }
        else{
            cout<<amo<<endl;
        }
    }
    
    return 0;
}