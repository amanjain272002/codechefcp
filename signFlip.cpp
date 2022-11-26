#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n, k, sum = 0, negative = 0, subseq = 0;
        cin >> n >> k;
        long int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum = sum + a[i];
        }
        sort(a, a + n);

        for (int i = 0; i < n; i++)
        {
            if (a[i] < 0 && i < k)
            {
                negative = negative + abs(a[i]);
            }
            if (a[i] > 0)
            {
                subseq = subseq + a[i];
            }
        }
        if (subseq + negative > sum)
        {
            cout << subseq + negative << endl;
        }
        else if (sum > 0)
        {
            cout << sum << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}