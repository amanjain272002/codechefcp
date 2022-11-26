#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, sum = 0, men = 0;
        cin >> n >> k;
        long int w[n];
        for (int i = 0; i < n; i++)
        {
            cin >> w[i];
            men = men + w[i];
        }
        sort(w, w + n);
        if (n - k < k)
        {
            for (int i = 0; i < n - k; i++)
            {
                sum = sum + w[i];
            }
        }
        else
        {
            for (int i = 0; i < k; i++)
            {
                sum = sum + w[i];
            }
        }
        men = men - sum;
        cout << men - sum << endl;
    }

    return 0;
}