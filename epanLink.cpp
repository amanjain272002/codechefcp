#include <iostream>
#include <string>
#define ll long long
using namespace std;

int main()
{
    ll int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s.length() == 1)
        {
            cout << s << endl;
        }
        else
        {
            ll int l = s.length();
            int sum = 10 * (s[l - 2] - '0') + 1 * (s[l - 1] - '0');
            cout << sum % 20 << endl;
        }
    }
}