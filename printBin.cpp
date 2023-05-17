#include <iostream>
using namespace std;

void barray(){
    long long int n,a;
    cin>>n;
    int c[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a;
        if (a==0)
        {
            c[i] = 1;
        }
        else
        {
            c[i] = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<c[i]<<" ";
    }
    cout<<endl;
}


int main() {
	// your code goes here
	long long int t;
	cin>>t;
	while(t--){
	    barray();
	}
	return 0;
}
