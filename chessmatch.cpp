#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int N,A,B,totaltime=0;
        cin>>N>>A>>B;
        if(N%2==0){
            if(B>=2){
            totaltime = 2*(180+N)-(A+B);
            cout<<totaltime<<endl;
            } 
        }
        else{
            if(A>=2){
            totaltime = 2*(180+N)-(A+B);
            cout<<totaltime<<endl;
            } 
        }
    }
    
    return 0;
}