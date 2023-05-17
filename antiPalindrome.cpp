#include <iostream>
#include <string>
#include <map>
using namespace std;

void anpal()
{
    long long int n, mone = 0,odd=0;
    cin >> n;
    char c;
    map<char, int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        m[c]++;
    }
    if (m.size() == 1)
    {
        if (n % 2 != 0)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }

    else if (n % 2 != 0)
    {
        for (auto i = m.begin(); i != m.end(); i++)
        {
            if (i->second % 2 == 0 and i->second != 1)
            {
                mone = i->second + mone;
            }
            else
            {
                odd++;
            }
        }
        if (n - mone == 1 or odd == 1)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    else
    {
        for (auto i = m.begin(); i != m.end(); i++)
        {
            if (i->second % 2 == 0)
            {
                mone = i->second + mone;
            }
        }
        if (n - mone == 0)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
}

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        anpal();
    }

    return 0;
}