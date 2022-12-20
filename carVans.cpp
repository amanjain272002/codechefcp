#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,count = 0,mini;
	    cin>>n;
	    int a[n];
	    for (int i = 0; i < n; i++) {
	        cin>>a[i];
	    }
	    mini = a[0];
	    for (int i = 1; i < n; i++) {
	        if(a[i]<mini){
	            count++;
	            mini = a[i];
	        }
	    }
	    cout<<count+1<<endl;
	}
	return 0;
}
