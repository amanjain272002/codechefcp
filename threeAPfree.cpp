#include <iostream>
#include <vector>
using namespace std;

int apFree(int n)
{
    vector<int> v;
    int a, flag = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    v.shrink_to_fit();
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (v[j] - v[i] == v[k] - v[j])
                {
                    return false;
                }
            }
        }
    }
    return true;
}

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (apFree(n))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
