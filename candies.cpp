#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    long int t;
    cin >> t;
    while (t--)
    {
        long int n, count = 0;
        string ans = "Yes";
        cin >> n;
        long int a[2 * n];
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + 2 * n);
        for (int i = 1; i < 2 * n; i++)
        {
            if (a[i] == a[i - 1])
            {
                count++;
            }
            if (count == 2)
            {
                ans = "No";
                break;
            }
            else if (a[i] != a[i - 1])
            {
                count = 0;
            }
        }
        cout << ans << endl;
    }

    return 0;
}