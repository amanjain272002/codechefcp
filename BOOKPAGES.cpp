#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,sum=0,a;
	    cin>>n;
	    for (int i = 0; i < n; i++) {
	        cin>>a;
	        sum = sum + a;
	    }
	    if(sum%2==0){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
