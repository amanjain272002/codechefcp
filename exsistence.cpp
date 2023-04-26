#include <iostream>
#define lng long long 
using namespace std;

void exstnce(){
    lng int p,q;
    cin>>p>>q;
    if(p*p == 2*q){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}


int main() {
	int t;
    cin>>t;
    while (t--)
    {
        exstnce();
    }
    
	return 0;
}
