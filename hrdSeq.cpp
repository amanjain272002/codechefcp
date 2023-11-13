#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(0);
    for (int i = 1; i < 128; i++)
    {
        int x = v[i - 1];
        if (count(v.begin(), v.begin() + i - 1, x))
        {
            for (int j = i - 2; j >= 0; j--)
            {
                if (x == v[j])
                {
                    v.push_back(i - j - 1);
                    break;
                }
            }
        }
        else
        {
            v.push_back(0);
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << count(v.begin(), v.begin() + n, v[n - 1]) << endl;
    }

    return 0;
}