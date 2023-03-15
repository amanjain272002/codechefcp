#include <iostream>
#include <vector>
typedef long long ll;
using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, sum = 0;
        cin >> n;
        vector<ll> v1(n);
        vector<ll> v2(n, 1);
        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
        }
        for (int i = 1; i < n; i++)
        {
            if (v1[i] >= v1[i - 1])
            {
                v2[i] = v2[i - 1] + 1;
            }
        }
        for (int i = 0; i < n; i++)
        {
            sum = sum + v2[i];
        }
        cout << sum << endl;
    }

    return 0;
}