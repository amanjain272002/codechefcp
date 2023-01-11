#include <iostream>
#include <string>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int p = 0;
        string s;
        cin >> s;
        for (ll i = 0; i < s.length(); i++)
        {
            if (s[i] - '0' == 7)
            {
                p = 1;
                break;
            }
        }

        if (p == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}