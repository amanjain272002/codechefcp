#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n, k, count = 0, flag = 0;
        cin >> n >> k;
        string s;
        cin >> s;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '*')
            {
                count++;
                if (count == k)
                {
                    flag = 1;
                    break;
                }
            }
            else
            {
                count = 0;
            }
            
        }

        if (flag == 1)
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