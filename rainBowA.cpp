#include <iostream>
using namespace std;

void solve(int n)
{
    int arr[n], f = 0, t, a = 1, z = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 7)
        {
            f = 1;
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if ((arr[i] > z && arr[i] != (z + 1)))
        {
            f = 1;
            break;
        }

        else if (arr[i] > z && arr[i] == (z + 1))
        {
            z++;
        }
    }

    if (n % 2 != 0)
    {
        t = (n + 1) / 2 - 1;
        for (int i = 0; i < t; i++)
        {
            if (arr[i] != arr[n - i - 1])
            {
                f = 1;
                break;
            }
        }
    }
    else
    {
        t = n / 2;
        for (int i = 0; i < t; i++)
        {
            if (arr[i] != arr[n - i - 1])
            {
                f = 1;
                break;
            }
        }
    }

    if ((f == 1) || (z < 7))
    {
        cout << "no" << endl;
    }
    else
    {
        cout << "yes" << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        solve(n);
    }

    return 0;
}