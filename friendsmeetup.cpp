#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x1, x2;
        cin >> x1 >> x2;
        if(x1==x2){
	        cout<<"YES"<<endl;
	    }
	    else if(x1<x2){
	        cout<<"NO"<<endl;
	    }
	    else if(x1>x2){
	        cout<<"YES"<<endl;
	    }
    }

    return 0;
}