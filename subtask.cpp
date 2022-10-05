#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, m, k, p[100], sum = 0, q = 0;
        cin >> n >> m >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
        }
        for (int i = 0; i < n; i++)
        {
            sum = sum + p[i];
        }
        if (sum == n)
        {
            cout << "100" << endl;
        }
        else
        {
            for (int i = 0; i < m; i++)
            {
                if (p[i] == 1)
                    q = q + 1;
            }
            if (q == m)
            {
                cout << k << endl;
            }
            else
            {
                cout << "0" << endl;
            }
        }
    }

    return 0;
}