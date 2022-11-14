#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,b=1;
        cin>>n;
        int a[n+1][n+1];
        for (int i = 1; i <= n; i++)
        {
            int k = i;
            for (int j = 1; j <= i; j++,k--)
            {
                if (k>0)
                {
                  a[j][k] = b++;  
                }
            }
            
        }
        for (int i = 2; i <= n; i++)
        {
            int k = i;
            for (int j = n; j >= i; j--,k++)
            {
                a[k][j] = b++;
            }
            
        }
        
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        
    }
    
    return 0;
}