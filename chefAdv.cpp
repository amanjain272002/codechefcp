#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int N,M,X,Y; cin>>N>>M>>X>>Y;
    if((N-1)%X ==0 and (M-1)%Y==0) cout<<"Chefirnemo"<<endl;
    else if(N == 1 or M == 1) cout<<"Pofik"<<endl;
    else if((N-2)%X == 0 and (M-2)%Y ==0) cout<<"Chefirnemo"<<endl;
    else cout<<"Pofik"<<endl;
}
int main() {
	int tc = 1; cin>>tc;
	while(tc--) solve();
	return 0;
}
