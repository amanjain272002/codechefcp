#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k, check = 0, flag = 0;
        cin >> k;
        string s;
        for (int i = 0; i < k; i++)
        {
            int flag = 0,check=0;
            cin >> s;
            if (s[0] >= 'A' && s[0] <= 'Z')
            {
                for (int j = 1; j < s.length(); j++)
                {
                    if (s[j] <= 'A' && s[j] >= 'Z')
                    {
                        flag = 1;
                        break;
                    }
                    if (s[j] == 'N' || s[j] == 'Z')
                    {
                        check = 1;
                    }
                }
            }
            else
            {
                for (int j = 1; j < s.length(); j++)
                {
                    if (s[j] <= 'a' && s[j] >= 'z')
                    {
                        flag = 1;
                        break;
                    }
                    if (s[j] == 'a' || s[j] == 'm')
                    {
                        check = 1;
                    }
                }
            }
            if (flag == 1)
            {
                break;
            }
        }
        if (flag == 0 && check == 1)
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