#include <iostream>
#include <set>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n, m, b;
        string ans = "NO";
        cin >> n >> m;
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            cin >> b;
            s.insert(b);
        }
        while (m > 0)
        {
            if (s.find(m) == s.end())
            {
                ans = "YES";
                break;
            }
            m--;
        }
        cout << ans << endl;
    }

    return 0;
}