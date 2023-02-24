#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, count = 0;
        char c;
        string ans = "YES";
        cin >> n >> m;
        map<char, int> k;
        for (int i = 0; i < n + m; i++)
        {
            cin >> c;
            k[c]++;
        }
        if ((n + m) % 2 == 0)
        {
            for (auto it = k.begin(); it != k.end(); it++)
            {
                if (it->second % 2 != 0)
                {
                    ans = "NO";
                    break;
                }
            }
        }
        else
        {
            for (auto it = k.begin(); it != k.end(); it++)
            {
                if (it->second % 2 != 0)
                {
                    count++;
                }
            }
            if (count > 1)
            {
                ans = "NO";
            }
        }
        cout << ans << endl;
    }

    return 0;
}