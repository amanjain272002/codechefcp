#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        long int a[i];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {
            int count = 0;
            for (int j = i+1; j < n; j++)
            {
                if (a[i]<a[j])
                {
                    count++;
                }
            }
            cout<<count<<" ";
        }
        cout<<endl;
        
        

        
    }
    
    return 0;
}