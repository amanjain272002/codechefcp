#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        char p;
        int q, flag = 0;
        cin >> s;
        if (s[0] == '<' && s[1] == '/' && s[s.length() - 1] == '>')
        {
            for (int i = 2; i < s.length() - 1; i++)
            {
                p = s[i];
                q = int(p);
                if ((q >= 97 && q <= 122) || (q >= 48 && q <= 57))
                {
                    flag = 1;
                }
                else
                {
                    flag = 0;
                    break;
                }
            }
        }
        if (flag == 1)
        {
            cout << "Success" << endl;
        }
        else
        {
            cout << "Error" << endl;
        }
    }

    return 0;
}