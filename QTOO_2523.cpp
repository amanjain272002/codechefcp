#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        cin >> n;
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        for (int i = 1; i < n; i++)
        {
            if (s[i] == s[i - 1])
            {
                count = 1;
            }
        }
        if (count == 1)
        {
            cout << n - 2 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}
