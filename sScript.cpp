#include <iostream>
#include <map>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, count = 0, c = 0;
        cin >> n >> k;
        char s, b;
        cin >> s;
        if (s == '*')
        {
            count++;
            b = s;
        }
        else
        {
            b = s;
        }

        for (int i = 1; i < n; i++)
        {
            cin >> s;
            if (b == s && b == '*')
            {
                count++;
            }
            if (count+1 >= k)
            {
                cout << "YES" << endl;
                c = 1;
                break;
            }

            // cout<<b<<" "<<i<<" "<<s<<endl;
            b = s;
        }

        if (c == 0)
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}