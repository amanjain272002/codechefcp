#include <iostream>
using namespace std;

void packets(){
    int x,y,cost;
    cin>>x>>y;
    cost = 2*y + x;
    cout<<cost<<endl;
}


int main() {
	int t;
    cin>>t;
    while (t--)
    {
        packets();
    }
    
	return 0;
}
