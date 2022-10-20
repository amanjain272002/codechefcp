#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int m,index= 0;
        cin>>m;    
        for (int i = 0; i < m; i++)
        {
            int a;
            cin>>a;
            if (0!=a)
            {
                index = i;
            }
        }
        cout<<index<<endl;
    }
    
    return 0;
}