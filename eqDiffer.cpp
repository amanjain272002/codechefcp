#include <iostream>
#include <map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        map<int, int> m;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            m[x]++;
        }
        int mn = 0;
        for (auto it = m.begin(); it != m.end(); it++)
        {
            if (it->second > mn)
            {
                mn = it->second;
            }
        }
        if (mn == 1 and n > 1)
        {
            cout << n - 2 << endl;
        }
        else
        {
            cout << n - mn << endl;
        }
    }
}