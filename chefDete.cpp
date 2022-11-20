#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	unordered_set<int> s;
	for(int i=0;i<n;i++)s.insert(a[i]);
	
	
	for(int i=1;i<n+1;i++){
	    if(s.find(i)==s.end())cout<<i<<" ";
	}
	
	
	
	return 0;
}