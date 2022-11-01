#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, l, r;
        int count = 0;
        cin >> s;
        for (long int i = 0; i < s.length(); i++)
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
        for (long int i = 0; i < s.length(); i++)
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

        for (long int i = 0; i < s.length(); i++)
        {
            if (l[i] == r[i])
            {
                count++;
            }
        }
        if (count == s.length())
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