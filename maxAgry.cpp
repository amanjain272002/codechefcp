#include <iostream>
#include <math.h>
using namespace std;

long long solve()
{
    long long n, k;
    cin >> n >> k;
    if (n == 1)
    {
        return 0;
    }
    else if (k >= floor(n / 2))
    {
        return (n * (n - 1) / 2);
    }
    else
    {
        long long totalsum = 0, leftsum = 0, y;

        // Total sum when all the higher numbers are ahead of smaller number .
        totalsum = n * (n - 1) / 2;

        // total no. of elements which do no go ahead of smaller no.
        y = n - 2 * k;

        // sum of these left elements
        leftsum = y * (y - 1) / 2;

        return (totalsum - leftsum);
    }
}

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        cout << solve() << "\n";
    }
    return 0;
}