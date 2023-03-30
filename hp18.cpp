#include <iostream>
using namespace std;

void solve()
{
    long int n, a, b, countbob = 0, countalice = 0;
    cin >> n >> a >> b;
    long int q[n] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> q[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (q[i] % a == 0)
        {
            q[i] = 0;
            countbob += 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (q[i] % b == 0 && q[i] != 0)
        {
            q[i] = 0;
            countalice += 1;
        }
    }

    if (countbob > countalice)
    {
        cout << "BOB" << endl;
    }
    else if (countbob < countalice)
    {
        cout << "ALICE" << endl;
    }
    
    else if(countalice == countbob)
    {
        if (countbob%2==0)
        {
            cout<<"ALICE"<<endl;
        }
        else
        {
            cout<<"BOB"<<endl;
        }
        
    }
    
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}