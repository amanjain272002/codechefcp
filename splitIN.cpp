#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int a;
        long int count = 0;
        cin>>a;
        while (a!=0)
        {
            if (a%2==0)
            {
                a  = a / 2; 
            }
            else{
                a = floor(a / 2);
                count ++ ; 
            }

        }
        cout<<count -1<<endl;
        
        
    }
    
    return 0;
}