#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n, m, x, count = 0;
        cin >> n >> m;
        x = n +m;
        long int a[x];
        for (int i = 0; i < n+m; i++)
        {
            cin>>a[i];
        }
        sort(a,a+x);
        for (int i = 1; i < n+m; i++)
        {
            if (a[i]==a[i-1])
            {
                count++;
            }
        }
        cout<<count<<endl;
    }

    return 0;
}