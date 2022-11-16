#include <iostream>
using namespace std;

int main()
{
    long int t;
    cin >> t;
    while (t--)
    {
        long int n, k, flag = 0;
        cin >> n >> k;
        long int a[n];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i++)
        {
            if (a[i] == k && i != n)
            {
                flag = 1;
            }
        }
        if (n == 1 && a[1] == k)
        {
            cout << "Yes" << endl;
        }
        else if (flag == 0)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }

    return 0;
}