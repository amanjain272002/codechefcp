#include <iostream>
#include <map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, flag = 0;
        map<int, int> m;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            m[a]++;
        }

        a = 1;
        auto itr = m.begin();
        for (auto it = m.begin(); it != m.end(); it++)
        {
            itr++;
            if ((it->first != a || it->second % 2 != 0))
            {
                if (itr != m.end() || it->first != a)
                {
                    flag = 1;
                }
            }
            a++;
        }
        if (flag == 1)
        {
            cout << "no" << endl;
        }
        else
        {
            cout << "yes" << endl;
        }
    }

    return 0;
}