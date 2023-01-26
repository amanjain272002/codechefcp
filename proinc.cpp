#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        double x,y,cp;
        cin>>x>>y;
        cp = abs(y - x);
        x = x + x/10;
        cout<<x - cp<<endl;
    }
    
    return 0;
}