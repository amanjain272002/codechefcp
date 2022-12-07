#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,x,totamo = 0,amospend = 0,exp=0,l;
        cin>>n>>x;
        totamo = pow(2,x);
        l = pow(2,x);
        for (int i = 1; i <= n; i++)
        {
            exp = totamo/2;
            amospend = exp + amospend;
            totamo = totamo - exp;
        }
        cout<<l-amospend<<endl;
    }
    
    return 0;
}