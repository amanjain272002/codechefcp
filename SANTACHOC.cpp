#include <bits/stdc++.h>
#define ll long long
using namespace std;

void gft()
{
    ll n, k;
    cin >> n >> k;
    ll sum = 0, element;
    for (int i = 0; i < n; i++)
    {
        cin >> element;
        sum += element;
    }
    if (sum < n)
    {
        cout << "NO";
    }
    else
    {
        sum = sum%n;
        if(k == 0 && sum!=0){
            cout<<"NO";
        }
        else{
            cout<<"YES";
        }
    }
    cout << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        gft();
    }

    return 0;
}