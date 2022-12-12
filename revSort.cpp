#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n, x, flag = 0, sum = 0;
        cin >> n >> x;
        long int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i + 1] < a[i])
            {
                if (a[i + 1] + a[i] > x)
                {
                    flag = 1;
                    break;
                }
                else
                {
                    swap(a[i], a[i + 1]);
                }
            }
        }
        if (flag == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}