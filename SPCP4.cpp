#include <iostream>
using namespace std;

void solve()
{
    int n, boys, groupsize;
    cin >> n >> boys >> groupsize;
    int girls = n - boys;
    int boysremain = boys % groupsize;
    int girlsremain = girls % groupsize;
    cout << max(boysremain, girlsremain) - min(boysremain, girlsremain) << endl;
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
