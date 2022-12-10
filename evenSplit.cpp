#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        unordered_map<char, int> m;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            m[s[i]]++;
        }
        if ((m['0'] >= 1 && m['1'] >= 1) && n > 2)
        {
            sort(s.begin(), s.end());
            cout << s << endl;
        }
        else
        {
            cout << s << endl;
        }
    }

    return 0;
}