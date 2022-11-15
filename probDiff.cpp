#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int a[4],count = 0;
        for (int i = 0; i < 4; i++)
        {
            cin>>a[i];
        }
        for (int i = 1; i < 4; i++)
        {
            if (a[i]!=a[i-1])
            {
                count++;
            }
        }
        if (count == 3)
        {
            cout<<count%2+1<<endl;
        }
        else{
        cout<<count%2<<endl;}
    }
    
    return 0;
}