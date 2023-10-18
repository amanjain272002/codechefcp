#include <bits/stdc++.h>
#define ll long long
using namespace std;

void pizaCut()
{
    ll n;
    cin >> n;
    if (n == 1 || n % 2 == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    cout << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        pizaCut();
    }

    return 0;
}