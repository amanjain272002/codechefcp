#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, l, r, ans = "NO";
        long int i = 0;
        cin >> s;
        for (i = 0; i < s.length(); i++)
        {
            if (i == 0)
            {
                l[s.length() - 1] = s[i];
            }
            else
            {
                l[i - 1] = s[i];
            }
        }
        for (i = 0; i < s.length(); i++)
        {
            if (i == s.length() - 1)
            {
                r[0] = s[i];
            }
            else
            {
                r[i + 1] = s[i];
            }
        }
    }

    return 0;
}