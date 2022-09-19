#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i = 0;i<t;i++){
        int x,y;
        cin>>x>>y;
        cout<<abs(x-y);
        cout<<"\n";
    }
    return 0;
}