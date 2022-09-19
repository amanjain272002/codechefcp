#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i = 0;i<t;i++){
        int x,y;
        cin >> x >> y;
        if (x == y)
            cout << "YES";

        else if (x < y)
            cout << "NO";

        else
            cout << "YES";
        cout << "\n";
        
    }
    return 0;
}