#include <iostream>
#include <string>
using namespace std;

void solve()
{
    long int n,k=0;
    cin>>n;
    string s;
    cin>>s;
    for (int i = 0; i < n; i+=2)
    {
        if (i == n-1)
        {
            break;
        }
        else if (s[i]!=s[i+1])
        {
            if (k==0)
            {
                k++;
            }
            else
            {
                k--;
            }
        }
    }
    if (k==1)
    {
        cout<<"Zaltan"<<endl;
    }
    else
    {
        cout<<"Rossum"<<endl;
    }
    
    
}

int main()
{
    long int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}