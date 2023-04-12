#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll int t;
    cin >> t;
    while (t--)
    {
        ll int n, a, k = 0,sum=0;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> a;
            sum = sum + a;
            if (i == sum)
            {
                k++;
            }
            
        }
        cout << k << endl;
    }

    return 0;
}