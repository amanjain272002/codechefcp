#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        long int A[100],x=-1;
        for (int i = 0; i < n; i++) 
        {
            cin>>A[i];
            x= max(x,A[i]);
        }
        cout<<x<<endl;
    }
    
    return 0;
}