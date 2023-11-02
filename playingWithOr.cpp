#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n, k, x;
    cin >> n >> k;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        arr.push_back(x);
    }
    int count = 0;
    for (int i = 0; i <= n - k ; i++)
    {
        bool found = false;
        for (int j = 0; j < k; j++)
        {
            if (arr[i + j] % 2 != 0)
            {
                found = true;
                break;
            }
        }
        if (found)
        {
            count++;
        }
    }
    cout << count << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
