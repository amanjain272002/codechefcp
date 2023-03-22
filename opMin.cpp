#include <iostream>
#include <math.h>
#include<algorithm>
using namespace std;
void solve()
{
    int n, cnt=0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for (int i = 1; i < n; i++)
    {
        if (a[i]>a[0])
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
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