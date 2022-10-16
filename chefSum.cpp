#include<iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    int ans=INT_MAX;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        ans=min(ans,arr[i]);
	    }
	    for(int i=0;i<n;i++){
	        if(arr[i]==ans){
	            cout<<i+1<<endl;
	            break;
	        }
	    }
	    
	}
	return 0;
}