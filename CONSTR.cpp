#include <iostream>
#include <string>
using namespace std;

void solve()
{
    long int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n;)
    {
        if (s[i] == s[i + 1] && s[i + 1] == s[i + 2])
        {
            s.erase(i, 2);
            n = n-2;
        }
        else
        {       
            i++;
        }
    }
    cout << s << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}