#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        long int i,j,count = 0;
        cin>>i>>j;
        while (i!=j)
        {
            if (i>j)
            {
                i = i/2;
            }
            else
            {
                j = j/2;
            }
            count++;
        }
        cout<<count<<endl;
    }
    
    return 0;
}