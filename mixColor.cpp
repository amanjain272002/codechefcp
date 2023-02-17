#include <iostream>
#include<set>
using namespace std;

int main() {
	int t;
    cin>>t;
    while (t--)
    {
        long int n,a;
        cin>>n;
        set<long int> s;
        for (int i = 0; i < n; i++)
        {
            cin>>a;
            s.insert(a);
        }
        cout<<n-s.size()<<endl;
        
    }
    
	return 0;
}