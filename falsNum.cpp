#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, one = "", ans = "";
        cin >> a;
        int l = a.length();
        one = a[0];
        int val = stoi(one);
        if (val > 1)
        {
            ans = ans + '1';
            ans = ans.append(a);
        }
        else
        {
            for (int i = 0; i < l; i++)
            {
                if (i == 1)
                {
                    ans = ans + '0';
                }
                ans = ans + a[i];
            }
        }
        cout << ans << endl;
    }

    return 0;
}