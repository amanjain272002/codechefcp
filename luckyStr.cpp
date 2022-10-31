#include <iostream>
#include <string>
using namespace std;

int main()
{
    long int k, n;
    cin >> k >> n;
    string a[k];
    for (int i = 0; i < k; i++)
    {
        cin >> a[i];
    }
    for (long int i = 0; i < n; i++)
    {
        string s, str,ans = "Bad";
        cin >> s;

        for (long int l = 0; l < s.length(); l++)
        {
            for (long int i = 0; i < k; i++)
            {
                if (s.length() >= 47 && s.length()<=50)
                {
                    ans = "Good";
                    break;
                }

                else if (s.length() >= a[i].length())
                {
                    str = s.substr(l, a[i].length());
                    if (str == a[i])
                    {
                        ans = "Good";
                        break;
                    }
                }
            }
            if (ans == "Good")
            {
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}