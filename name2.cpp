#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i = 0, j = 0, flag = 0;
        string m, w, ans = "NO";
        cin >> m >> w;
        if (m.size() == w.size())
        {
            if (m == w)
            {
                ans = "YES";
            }
        }
        else
        {
            if (m.size() < w.size())
            {
                while (i < m.size() && j < w.size())
                {
                    if (m[i] == w[j])
                    {
                        i += 1;
                        j += 1;
                    }
                    else
                    {
                        j = j + 1;
                    }
                }
                if (i == m.size())
                {
                    ans = "YES";
                }
            }
            else
            {
                while (i < m.size() && j < w.size())
                {
                    if (m[i] == w[j])
                    {
                        i += 1;
                        j += 1;
                    }
                    else
                    {
                        i = i + 1;
                    }
                }
                if (j == w.size())
                {
                    ans = "YES";
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}