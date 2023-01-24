#include <iostream>
using namespace std;

string solve()
{
    long int n, k, l;
    cin >> n >> k >> l;
    long int max, maximum = 0, fnd;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> max;
        if (max > maximum)
        {
            maximum = max;
        }
    }
    cin >> fnd;

    if (fnd > maximum)
    {
        return "Yes";
    }
    else
    {
        if (k <= 0)
        {
            return "No";
        }
        else
        {
            fnd += (l - 1) * k;
            if (fnd > maximum)
            {
                return "Yes";
            }
            else
            {
                return "No";
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cout << solve() << "\n";
    }

    return 0;
}