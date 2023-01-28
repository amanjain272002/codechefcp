#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        long int n;
        cin>>n;
        if (n%6==0)
        {
            cout<<"Misha"<<endl;
        }
        else
        {
            cout<<"Chef"<<endl;
        }

    }
    
    return 0;
}