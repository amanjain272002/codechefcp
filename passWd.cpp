#include <iostream>
#include <string>
using namespace std;

void solve(string s)
{
    int a = 0, b = 0, c = 0, d = 0, e = 0;
    if (s.length() < 21)
    {
        if (s.length() < 10)
        {
            cout << "NO" << endl;
        }
        else
        {
            for (int i = 0; i < s.length(); i++)
            {
                if (i != 0 && i != s.length() - 1)
                {
                    if (s[i] > 64 && s[i] < 91)
                    {
                        a = 1;
                    }
                    if (s[i] >= '0' && s[i] <= '9')
                    {
                        b = 1;
                    }
                    if (s[i] == '@' || s[i] == '?' || s[i] == '#' || s[i] == '&' || s[i] == '%')
                    {
                        c = 1;
                    }
                }
                if ((s[i] > 96) && (s[i] < 123))
                {
                    d = 1;
                }
            }
            if (a == 1 && b == 1 && c == 1 && d == 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        solve(s);
    }

    return 0;
}