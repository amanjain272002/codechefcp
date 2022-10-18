#include <iostream>
#include <string>

using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s, ans = "Bad";
        int count0 = 0;
        cin >> s;
        for (int i = 0; i < s.size() - 1; i++)
        {
            if ((s[i] == '0' && s[i + 1] == '1' && s[i + 2] == '0') || (s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '1'))
            {
                ans = "Good";
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}