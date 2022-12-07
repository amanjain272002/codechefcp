#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n, count = 0, prevcount = 0, mn = 0;
        map<char,long int> m;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 1; i < n; i++)
        {
            if (s[i] == s[i - 1])
            {
                count++;
            }
            else if (prevcount < count)
            {
                prevcount = count;
                count = 0;
            }
            m[s[i]]++;
        }
        for (auto it = m.begin(); it != m.end(); it++)
        {
            mn = max(mn, it->second);
        }
        if (count == 0 && prevcount != 0)
        {
            cout << prevcount + 1 << endl;
        }
        else if (count == 0 && prevcount == 0 && mn > 1)
        {
            cout << 1 << endl;
        }
        else if (count == 0 && prevcount == 0 && mn == 1)
        {
            cout << 0 << endl;
        }
        else if (count != 0 && prevcount == 0)
        {
            cout << count << endl;
        }
        else if (count > prevcount)
        {
            cout << count + 1 << endl;
        }
        else if (count <= prevcount)
        {
            cout << prevcount + 1 << endl;
        }
    }

    return 0;
}