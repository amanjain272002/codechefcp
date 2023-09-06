#include <bits/stdc++.h>
#define ll long long
using namespace std;

void mix2()
{
    ll n, ele, countmix = 0;
    vector<ll> quatity;
    cin >> n;
    if (n == 1)
    {
        cout << 1;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cin >> ele;
            quatity.push_back(ele);
        }
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                countmix += quatity[i] * quatity[j];
            }
        }
    }

    cout << countmix << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        mix2();
    }

    return 0;
}