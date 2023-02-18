#include<iostream>
#include<set>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,a;
        cin>>n;
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            cin>>a;
            s.insert(a);
        }
        if (s.size()==n)
        {
            if (n%2==0)
            {
                cout<<s.size()/2<<endl;
            }
            else
            {
                cout<<s.size()/2+1<<endl;
            }
        }
        else
        {
            /* code */
        }
        
    }
    
    return 0;
}