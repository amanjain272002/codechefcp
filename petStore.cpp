#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n, x, flag = 0;
        cin >> n;
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            m[x]++;
        }
        for (auto it = m.begin(); it != m.end(); it++)
        {
            if ((it->second) % 2 != 0)
            {
                flag = 1;
            }
        }
        if (flag == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}