#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int count = 0;
        string a, b;
        cin >> a >> b;
        map<char, long int> m, n;
        for (auto i : a)
        {
            m[i]++;
        }
        for (auto i : b)
        {
            n[i]++;
        }

        for (auto it : m)
        {
            for (auto it1 : n)
            {
                if (it.first == it1.first)
                {
                    count = count + min(it.second, it1.second);
                }
            }
        }
        cout << count << endl;
    }

    return 0;
}