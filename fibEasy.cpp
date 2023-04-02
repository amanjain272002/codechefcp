#include <iostream>
using namespace std;

void solve()
{
    long int n;
    cin >> n;

    long int index_save = 0, val = 0, a1 = 0, a2 = 1, a3 = 0, arr[n + 1] = {0};
    arr[2] = 1;
    for (int i = 3; i <= n; i++)
    {
        arr[i] = (arr[i - 1] + arr[i - 2]) % 10;
    }

    for (int i = n; i >= 1; i--)
    {
        if ((i & (~(i - 1))) == i)
        {
            index_save = i;
            break;
        }
    }

    cout << arr[index_save] << endl;
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