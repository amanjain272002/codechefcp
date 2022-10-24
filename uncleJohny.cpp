#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n,a[100],k,temp;
        cin>>n;
        for (int i = 1; i <= n; i++)
        {
            cin>>a[i];
        }
        cin>>k;
        temp = a[k];
        sort(a+1,a+n+1);
        for (int i = 1; i <= n; i++)
        {
            if (temp==a[i])
            {
                cout<<i<<endl;
                break;
            }
            
        }
    }
    
    return 0;
}