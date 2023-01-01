#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n, p;
        cin >> n;
        vector<int> a;
        long int ans[n] = {1};
        ans[n - 1] = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> p;
            if (p < 0)
            {
                a.push_back(1);
            }
            else
            {
                a.push_back(2);
            }
        }

        for (int i = n - 2; i >= 0; i--)
        {
            if (a[i] * a[i + 1] == 2)
            {
                ans[i] = 1 + ans[i + 1];
            }
            else
            {
                ans[i] = 1;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << ans[i]<<" ";
        }
        cout << endl;
    }

    return 0;
}