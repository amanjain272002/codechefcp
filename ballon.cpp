#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 7;
        cin >> n;
        int a[16];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (int i = 8; i <= n; i++)
        {
            if (a[i] <= 7)
            {
                count = i;
            }
        }
        cout << count << endl;
    }

    return 0;
}