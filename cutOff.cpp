#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        if (n==x)
        {
            cout<<a[0]-1<<endl;
        }
        else
        {
            cout << a[n - x] - 1 << endl;
        }
        
        
    }

    return 0;
}