#include <iostream>
#define ll long long int
using namespace std;

void pilgriM()
{
    ll n, x, k, p;
    cin >> n >> x >> k >> p;
    ll sum = p;
    if (x <= k)
    {
        sum += (k - x) * 5 + (x)*10;
        if (n == k)
        {
            sum += 20;
        }
    }
    else if (x > k)
    {
        sum += k * 10;
    }

    cout << sum << endl;
}

int main()
{
    // your code goes here
    ll t;
    cin >> t;
    while (t--)
    {
        pilgriM();
    }
    return 0;
}
