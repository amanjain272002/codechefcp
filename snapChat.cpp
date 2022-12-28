#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n, count = 0, mx = 0;
        cin >> n;
        long int a[n];
        long int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i] != 0 && b[i] != 0)
            {
                count++;
                mx = max(mx, count);
            }
            else
            {
                count = 0;
            }
        }
        cout <<"Ans  = "<<mx << endl;
    }

    return 0;
}