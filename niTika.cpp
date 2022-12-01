#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i = 0, j = 0, count = 0;
        string s, ans = "";
        cin.ignore();
        getline(cin, s);
        // cout<<s<<endl;
        // cout<<s.length()<<endl;

        while (i < s.length())
        {
            if (s[i] == ' ')
            {
                count++;
            }
            i++;
        }
        while (count--)
        {
            int k = 0;
            while (j < s.length())
            {
                if (k == 0)
                {
                    s[j] = toupper(s[j]);
                    cout << s[j] << endl;
                    ans = ans + s[j];
                    ans.append(".");
                    k = 1;
                }
                else if (s[j] == ' ')
                {
                    j = j + 1;
                    break;
                }
                else
                {
                    continue;
                }
                j++;
            }
        }
        s[j] = toupper(s[j]);
        ans = ans + s[j];
        j++;
        while (j < s.length())
        {
            s[j] = tolower(s[j]);
            ans = ans + s[j];
            j++;
        }
        cout << ans << endl;
    }

    return 0;
}