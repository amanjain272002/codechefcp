#include <iostream>
#include <map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a;
        cin >> n;
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            m[a]++;
        }
        if (m.size() == 1)
        {
            cout << n << endl;
        }
        else
        {
            int ans = 0;

            auto i = m.begin();
            advance(i, m.size() / 2);
            for (; i != m.end(); i++)
            {
                ans = ans + i->second;
            }

            cout << ans << endl;
        }
    }

    return 0;
}