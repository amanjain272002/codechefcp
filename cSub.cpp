#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n, count = 0, ans = 0;
        string s;
        cin >> n;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                count++;
            }
        }
        while (count > 0)
        {
            ans = ans + count;
            count--;
        }
        cout << ans << endl;
    }

    return 0;
}